/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (64.17%)
 * Likes:    11679
 * Dislikes: 374
 * Total Accepted:    3.2M
 * Total Submissions: 5M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 * 
 * An Anagram is a word or phrase formed by rearranging the letters of a
 * different word or phrase, typically using all the original letters exactly
 * once.
 * 
 * 
 * Example 1:
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * Example 2:
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 * 
 * 
 * 
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 * 
 */

// @lc code=start
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // check unique char: a n g r m
        // check how many times each unique char gets repeated

        // loop thru s first, and store unique characters (key) and the number of occurences (value) -> map
        // do the same for t
        // check if the two maps are equal

        std::unordered_map<char, int> map_s;
        for (int i = 0; i < s.length(); ++i) {
            if (map_s.find(s[i]) == map_s.end()) {
                map_s.insert({s[i], 1});
            } else {
                map_s.find(s[i])->second++;
            }
        }
        std::unordered_map<char, int> map_t;
        for (int i = 0; i < t.length(); ++i) {
            if (map_t.find(t[i]) == map_t.end()) {
                map_t.insert({t[i], 1});
            } else {
                map_t.find(t[i])->second++;
            }
        }

        if (map_s == map_t) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

