#include <iostream>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            std::swap(s[start++], s[end--]);
        }
    }
};

int main() {
    Solution solution;

    // Example usage:
    std::vector<char> input = {'h', 'e', 'l', 'l', 'o'};
    
    std::cout << "Original String: ";
    for (char c : input) {
        std::cout << c;
    }
    std::cout << std::endl;

    solution.reverseString(input);

    std::cout << "Reversed String: ";
    for (char c : input) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
