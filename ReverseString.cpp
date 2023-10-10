#include <iostream>
#include <string>

void reverseString(std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string inputString;

    // Ask the user to input a string
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    // Reverse the string in-place
    reverseString(inputString);

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
