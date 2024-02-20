#include "125.valid-palindrome.cpp"
#include <iostream>

int main() {
    Solution sol;
    std::cout << sol.isPalindrome("A man, a plan, a canal: Panama") << std::endl;
    std::cout << sol.isPalindrome("race a car") << std::endl;
    std::cout << sol.isPalindrome(" ") << std::endl;
    std::cout << sol.isPalindrome("abcdefg hijk kj:ih !gf edcba;") << std::endl;
}