/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (61.34%)
 * Likes:    11524
 * Dislikes: 1274
 * Total Accepted:    3.7M
 * Total Submissions: 6M
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an integer array nums, return true if any value appears at least twice
 * in the array, and return false if every element is distinct.
 * 
 * 
 * Example 1:
 * Input: nums = [1,2,3,1]
 * Output: true
 * Example 2:
 * Input: nums = [1,2,3,4]
 * Output: false
 * Example 3:
 * Input: nums = [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= nums.length <= 10^5
 * -10^9 <= nums[i] <= 10^9
 * 
 * 
 */

// @lc code=start
#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // iterate through array and store seen elements into a set
        // if cannot insert into set, we have seen it, so we found a duplicate and return true
        std::set<int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            if (!seen.insert(nums[i]).second) {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

