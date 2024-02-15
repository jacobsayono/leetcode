#include "20.valid-parentheses.cpp"
#include <iostream>

int main() {
    Solution solution;

    std::string s1 = "{([])}";
    std::cout << solution.isValid(s1) << std::endl;
    std::string s2 = ")(";
    std::cout << solution.isValid(s2) << std::endl;
    std::string s3 = ")";
    std::cout << solution.isValid(s3) << std::endl;
    std::string s4 = "{{{}}}";
    std::cout << solution.isValid(s4) << std::endl;
    std::string s5 = "[][]{}";
    std::cout << solution.isValid(s5) << std::endl;
    std::string s6 = "[])";
    std::cout << solution.isValid(s6) << std::endl;
    std::string s7 = "(";
    std::cout << solution.isValid(s7) << std::endl;
    std::string s8 = "([{";
    std::cout << solution.isValid(s8) << std::endl;
}