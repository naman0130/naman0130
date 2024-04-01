#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    double radius, length, width, side1, side2, side3;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);

    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    Triangle triangle(side1, side2, side3);

    cout << "Circle - Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << endl;
    cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << endl;
    cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << endl;
