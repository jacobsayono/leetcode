#include "704.binary-search.cpp"
#include <iostream>

int main() {
    Solution sol;
    std::vector<int> nums = {-1,0,3,5,9,12};
    std::cout << sol.search(nums, 9) << std::endl;
    std::cout << sol.search(nums, 2) << std::endl;

    std::vector<int> empty = {};
    std::vector<int> oneElement = {2};
    std::cout << sol.search(empty, 2) << std::endl;
    std::cout << sol.search(oneElement, 2) << std::endl;
}