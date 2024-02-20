/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (46.73%)
 * Likes:    8877
 * Dislikes: 8241
 * Total Accepted:    2.7M
 * Total Submissions: 5.8M
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * A phrase is a palindrome if, after converting all uppercase letters into
 * lowercase letters and removing all non-alphanumeric characters, it reads the
 * same forward and backward. Alphanumeric characters include letters and
 * numbers.
 * 
 * Given a string s, return true if it is a palindrome, or false otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "A man, a plan, a canal: Panama"
 * Output: true
 * Explanation: "amanaplanacanalpanama" is a palindrome.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "race a car"
 * Output: false
 * Explanation: "raceacar" is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = " "
 * Output: true
 * Explanation: s is an empty string "" after removing non-alphanumeric
 * characters.
 * Since an empty string reads the same forward and backward, it is a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 2 * 10^5
 * s consists only of printable ASCII characters.
 * 
 * 
 */

// @lc code=start
#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string cleaned = convertString(s);
        std::string::iterator left = cleaned.begin();
        std::string::iterator right = cleaned.end() - 1;
        while (left < right) {  // takes care of both even and odd-length strings
            if (*left != *right) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
    std::string convertString(std::string &s) {
        std::string result;
        for (int i = 0; i < s.length(); ++i) {
            if (!isspace(s[i]) && !ispunct(s[i])) {
                result += tolower(s[i]);
            }
        }
        return result;
    }
};
// @lc code=end

