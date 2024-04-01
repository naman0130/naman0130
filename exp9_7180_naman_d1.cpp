#include <iostream>

class StringOperation {
private:
    std::string str;

public:
    // Constructor
    StringOperation(std::string s) : str(s) {}

    // Method to find the length of the string
    int findLength() {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }

    // Method to find the reverse of the string
    std::string findReverse() {
        int length = findLength();
        std::string reversedStr;
        for (int i = length - 1; i >= 0; i--) {
            reversedStr.push_back(str[i]);
        }
        return reversedStr;
    }

    // Method to concatenate two strings
    std::string concatenate(std::string otherStr) {
        std::string concatenatedStr = str;
        concatenatedStr += otherStr;
        return concatenatedStr;
    }

    // Method to compare two strings
    bool compare(std::string otherStr) {
        int length = findLength();
        if (length != otherStr.length()) {
            return false;
        }
        for (int i = 0; i < length; i++) {
            if (str[i] != otherStr[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    StringOperation strOp("Hello");

    // Finding the length of the string
    std::cout << "Length of the string: " << strOp.findLength() << std::endl;

    // Finding the reverse of the string
    std::cout << "Reverse of the string: " << strOp.findReverse() << std::endl;

    // Concatenating two strings
    std::string concatenatedStr = strOp.concatenate(" World");
    std::cout << "Concatenated string: " << concatenatedStr << std::endl;

    // Comparing two strings
    std::cout << "Are the strings equal? " << (strOp.compare("Hello World") ? "Yes" : "No") << std::endl;

    return 0;
}
