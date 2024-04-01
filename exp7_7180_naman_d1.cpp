#include <iostream>

class MyNumber {
private:
    int number;
public:
    MyNumber(int num) : number(num) {}

    // Declaring the friend function
    friend MyNumber operator+(const MyNumber& num1, const MyNumber& num2);

    void display() {
        std::cout << "Number: " << number << std::endl;
    }
};

// Defining the friend function outside the class
MyNumber operator+(const MyNumber& num1, const MyNumber& num2) {
    // Accessing private member of MyNumber class
    int sum = num1.number + num2.number;
    return MyNumber(sum);
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    MyNumber myNum1(num1);
    MyNumber myNum2(num2);

    MyNumber result = myNum1 + myNum2; // Using overloaded + operator

    std::cout << "The sum is: ";
    result.display();

    return 0;
}
