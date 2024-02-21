#include "121.best-time-to-buy-and-sell-stock.cpp"
#include <iostream>

int main() {
    Solution sol;
    std::vector<int> prices = {7,1,5,3,6,4};
    std::vector<int> prices1 = {7,6,4,3,1};
    std::vector<int> prices2 = {};  // not going to be tested
    std::vector<int> prices3 = {7};
    std::vector<int> prices4 = {15, 0, 16, 1, 22};

    std::cout << sol.maxProfit(prices) << std::endl;
    std::cout << sol.maxProfit(prices1) << std::endl;
    // std::cout << sol.maxProfit(prices2) << std::endl;
    std::cout << sol.maxProfit(prices3) << std::endl;
    std::cout << sol.maxProfit(prices4) << std::endl;
}