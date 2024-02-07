#include <iostream>
#include <vector>
#include "1.two-sum.cpp"

int main() {
    Solution solution;

    std::vector<int> nums1 = {2,7,11,5};
    int target1 = 9;
    for (int i = 0; i < solution.twoSum(nums1, target1).size(); ++i) {
        std::cout << solution.twoSum(nums1, target1)[i] << " ";
    } std::cout << std::endl;
    
    std::vector<int> nums2 = {3,2,4};
    int target2 = 6;
    for (int i = 0; i < solution.twoSum(nums2, target2).size(); ++i) {
        std::cout << solution.twoSum(nums2, target2)[i] << " ";
    } std::cout << std::endl;

    std::vector<int> nums3 = {3,3};
    int target3 = 6;
    for (int i = 0; i < solution.twoSum(nums3, target3).size(); ++i) {
        std::cout << solution.twoSum(nums3, target3)[i] << " ";
    } std::cout << std::endl;
}