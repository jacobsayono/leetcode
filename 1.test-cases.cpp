#include <iostream>
#include <vector>
#include "1.two-sum.cpp"

int main() {
    std::vector<int> nums1 = {2,7,11,5};
    int target1 = 9;
    std::vector<int> result1;
    Solution solution1;
    result1 = solution1.twoSum(nums1, target1);
    for (int i = 0; i < result1.size(); ++i) {
        std::cout << result1[i] << " ";
    }
    std::cout << std::endl;
    
    std::vector<int> nums2 = {3,2,4};
    int target2 = 6;
    std::vector<int> result2;
    Solution solution2;
    result2 = solution2.twoSum(nums2, target2);
    for (int i = 0; i < result2.size(); ++i) {
        std::cout << result2[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> nums3 = {3,3};
    int target3 = 6;
    std::vector<int> result3;
    Solution solution3;
    result3 = solution3.twoSum(nums3, target3);
    for (int i = 0; i < result3.size(); ++i) {
        std::cout << result3[i] << " ";
    }
    std::cout << std::endl;

}