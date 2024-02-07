#include "9.palindrome-number.cpp"
#include <iostream>

int main() {
    Solution solution;

    int num1 = 121;
    int num2 = -121;
    int num3 = 10;

    std::cout << solution.isPalindrome(num1) << std::endl;
    std::cout << solution.isPalindrome(num2) << std::endl;
    std::cout << solution.isPalindrome(num3) << std::endl;
}