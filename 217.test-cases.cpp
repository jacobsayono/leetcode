#include "217.contains-duplicate.cpp"
#include <iostream>

int main() {
    Solution solution;
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> nums2 = {1, 2, 3, 1};
    std::vector<int> nums3 = {1, 2, 1, 1};

    std::cout << solution.containsDuplicate(nums1) << std::endl;
    std::cout << solution.containsDuplicate(nums2) << std::endl;
    std::cout << solution.containsDuplicate(nums3) << std::endl;
}