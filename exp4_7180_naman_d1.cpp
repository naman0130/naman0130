#include<iostream>

using namespace std;

class hello {
public:
    int a, b, c;

    hello(int n, int m) {
        a = n, b = m;	
    }	

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;	
    }

    void Binary() {
        int n, i = 0, j;
        cout << "Enter an integer to convert it into binary: ";
        cin >> n;
        int a[15]; 
        while (n > 0) { 
            // storing remainder in binary array 
            a[i] = n % 2; 
            n = n / 2; 
            i++; 
        } 

        // printing binary array in reverse order 
        for (int j = i - 1; j >= 0; j--) 
            cout << a[j]; 
    } 
};

int main() {
    hello nr(5, 10);
    nr.display();	
    nr.Binary();
    return 0;
}
