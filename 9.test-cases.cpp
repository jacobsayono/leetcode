#include "9.palindrome-number.cpp"
#include <iostream>

int main() {
    int num1 = 121;
    Solution solution1;
    std::cout << solution1.isPalindrome(num1) << std::endl;

    int num2 = -121;
    Solution solution2;
    std::cout << solution1.isPalindrome(num2) << std::endl;

    int num3 = 10;
    Solution solution3;
    std::cout << solution3.isPalindrome(num3) << std::endl;
}