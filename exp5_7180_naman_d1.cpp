#include <iostream>

using namespace std;

class myclass {
private:
    int x;

public:
    myclass(int val) {
        x = val;
    }

    void display();
};

void myclass::display() {
    cout << "the value of x is - " << x << endl;
}

int main() {
    myclass obj(5);
    obj.display();

    return 0;
}
