#include <iostream>

int maximum(int *a, int *b, int *c) {
    int max = *a; // Assume the first number is the maximum
    if (*b > max) {
        max = *b; // If the second number is greater, update max
    }
    if (*c > max) {
        max = *c; // If the third number is greater, update max
    }
    return max;
}

int main() {
    int num1, num2, num3;

    // Accepting three integers from the user
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Finding the maximum using the maximum function
    int max = maximum(&num1, &num2, &num3);

    // Displaying the maximum number
    std::cout << "Maximum number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << max << std::endl;

    return 0;
}
