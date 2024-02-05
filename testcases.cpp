#include <iostream>
#include <vector>
#include "1.two-sum.cpp"

int main() {
    std::vector<int> nums = {3,2,4};
    int target = 6;

    std::vector<int> result;

    Solution solution;

    result = solution.twoSum(nums, target);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }
}