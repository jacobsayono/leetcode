/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (51.74%)
 * Likes:    54760
 * Dislikes: 1858
 * Total Accepted:    12.2M
 * Total Submissions: 23.5M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * You can return the answer in any order.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * Only one valid answer exists.
 * 
 * 
 * 
 * Follow-up: Can you come up with an algorithm that is less than O(n^2) time
 * complexity?
 */

// @lc code=start
// // O(n^2)
// #include <vector>

// class Solution {
// public:
//     std::vector<int> twoSum(std::vector<int>& nums, int target) {    
//         std::vector<int> result;   
//         for (int left = 0; left < nums.size(); ++left) {
//             for (int right = left + 1; right < nums.size(); ++right) {
//                 if (nums[left] + nums[right] == target) {
//                     result.push_back(left);
//                     result.push_back(right);
//                     return result;
//                 }
//             }
//         }
//         return result;
//     }
// };

// O(n)
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {    
        std::vector<int> result;
        std::unordered_map<int, int> map;  // vector value, vector index
        for (int i = 0; i < nums.size(); ++i) {
            int match = target - nums[i];
            if (map.find(match) != map.end()) {  // .find() goes to last index if cannot find, so if it doesn't, there is a match for this iteration
                result.push_back(i);  // push_back index of the current iteration
                result.push_back(map[match]);  // index of the match
                return result;
            }
            map[nums[i]] = i;  // no match, store value (and its index) into map for next iteration
        }
        return result;
    }
};
// @lc code=end

