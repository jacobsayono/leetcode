/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (55.50%)
 * Likes:    12006
 * Dislikes: 2669
 * Total Accepted:    4.2M
 * Total Submissions: 7.5M
 * Testcase Example:  '121'
 *
 * Given an integer x, return true if x is a palindrome, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 * 
 * Follow up: Could you solve it without converting the integer to a string?
 */

// @lc code=start
#include <cstddef>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        std::size_t copy = x;
        std::size_t oneDigit = 0;
        std::size_t moveDigitLeft = 0;
        while (copy != 0) {
            oneDigit = copy % 10;  // get right most digit
            moveDigitLeft += oneDigit;  // iterative summing feature
            copy /= 10;  // break off right most digit
            moveDigitLeft *= 10;  // move over all digits by one place to the left
        }
        return moveDigitLeft/10 == x;  // compare original x with palindrome; remove the added 0
    }
};

/*
x = 121

copy = 121
oneDigit = 0
moveDigitLeft = 0

while copy:121 != 0 true {
    oneDigit = 121 % 10 = 1
    moveDigitLeft = 0 + 1 = 1
    copy = 121 / 10 = 12
    moveDigitLeft = 1 * 10 = 10
}

while copy:12 != 0 true {
    oneDigit = 12 % 10 = 2
    moveDigitLeft = 10 + 2 = 12
    copy = 12 / 10 = 1
    moveDigitLeft = 120
}

while copy:1 != 0 true {
    oneDigit = 1 % 10 = 1
    moveDigitLeft = 120 + 1 = 121
    copy = 1 / 10 = 0
    moveDigitLeft = 1210
}

while 0 != 0 false
*/

// @lc code=end

