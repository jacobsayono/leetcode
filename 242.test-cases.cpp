#include "242.valid-anagram.cpp"
#include <iostream>

int main() {
    Solution solution;

    std::string s1 = "hello";
    std::string t1 = "olleh";
    std::cout << solution.isAnagram(s1, t1) << std::endl;
    std::string s2 = "hell";
    std::string t2 = "olleh";
    std::cout << solution.isAnagram(s2, t2) << std::endl;
    std::string s3 = "blah";
    std::string t3 = "olleh";
    std::cout << solution.isAnagram(s3, t3) << std::endl;
    std::string s4 = "blah";
    std::string t4 = "lahb";
    std::cout << solution.isAnagram(s4, t4) << std::endl;
}