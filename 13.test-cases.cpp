#include "13.roman-to-integer.cpp"
#include <iostream>

int main() {
    Solution solution;

    std::string III = "III";
    std::string LVIII = "LVIII";
    std::string MCMXCIV = "MCMXCIV";

    std::cout << solution.romanToInt(III) << std::endl;
    std::cout << solution.romanToInt(LVIII) << std::endl;
    std::cout << solution.romanToInt(MCMXCIV) << std::endl;
}