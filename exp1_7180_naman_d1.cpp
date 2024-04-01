#include <iostream>
using namespace std;

class One {
public:
    One() {
        int num, count = 0;
        for (int i = 1; i > 0; i++) {
            cout << "enter the number - ";
            cin >> num;
            if (num % 8 == 0) {
                count++;
            } else {
                break;
            }
        }
        cout << "total " << count << " numbers are valid numbers." << endl;
    }
};

int main() {
