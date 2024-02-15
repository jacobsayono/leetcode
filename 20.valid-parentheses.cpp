/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (40.39%)
 * Likes:    23277
 * Dislikes: 1642
 * Total Accepted:    4.3M
 * Total Submissions: 10.6M
 * Testcase Example:  '"()"'
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Every close bracket has a corresponding open bracket of the same type.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = "(]"
 * Output: false
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 10^4
 * s consists of parentheses only '()[]{}'.
 * 
 * 
 */

// @lc code=start
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<int> stack;
        for (int i = 0; i < s.length(); ++i) {
            // push open brackets into stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            } else {
                // invalid cases
                if (stack.empty() ||
                    (s[i] == ')' && stack.top() != '(') ||
                    (s[i] == '}' && stack.top() != '{') ||
                    (s[i] == ']' && stack.top() != '[')) {
                        return false;
                }
                // found a pair bracket, so we can remove from stack
                stack.pop();
            }
        }
        // if stack is empty, return true. otherwise, there are leftovers
        return stack.empty();
    }
};
// @lc code=end

/*

The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 

example:
s = "{([])}"

i = 0:
{ pushed into stack

i = 1:
( pushed into stack

i = 2:
[ pushed into stack

i = 3:
] so we pop out the top of the stack, which is currently [, and continue to next iteration

...

since for loop ends regularly, return true



example:
s = ")}][{("

i = 0:


*/