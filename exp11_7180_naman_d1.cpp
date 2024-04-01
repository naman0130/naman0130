#include <iostream>

class Employee {
public:
    virtual double calculateSalary() const = 0; // Pure virtual function
};

class FullTimeEmployee : public Employee {
private:
    double baseSalary; // Additional data member specific to full-time employees

public:
    FullTimeEmployee(double baseSalary) : baseSalary(baseSalary) {}

    // Override the base class function to calculate salary for full-time employees
    double calculateSalary() const override {
        // Salary calculation logic for full-time employees
        return baseSalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(double hourlyRate, int hoursWorked) : hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    // Override the base class function to calculate salary for part-time employees
    double calculateSalary() const override {
        // Salary calculation logic for part-time employees
        return hourlyRate * hoursWorked;
    }
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double baseSalary, double bonus) : baseSalary(baseSalary), bonus(bonus) {}

    // Override the base class function to calculate salary for managers
    double calculateSalary() const override {
        // Salary calculation logic for managers
        return baseSalary + bonus;
    }
};

int main() {
    FullTimeEmployee ftEmployee(50000.0);
    PartTimeEmployee ptEmployee(20.0, 25);
    Manager manager(60000.0, 10000.0);

    // Polymorphic behavior: calling calculateSalary for different types of employees
    std::cout << "Full-time employee salary: $" << ftEmployee.calculateSalary() << std::endl;
    std::cout << "Part-time employee salary: $" << ptEmployee.calculateSalary() << std::endl;
    std::cout << "Manager salary: $" << manager.calculateSalary() << std::endl;

    return 0;
}
