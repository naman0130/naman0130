#include <iostream>
using namespace std;

class SeriesSum {
private:
    int n;

public:
    SeriesSum(int num) {
        n = num;
    }

    int computeSum() {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "enter a positive integer - ";
    cin >> n;

    if (n <= 0) {
        cout << "invalid input. please enter a positive integer." << endl;
        return 1;
    }

    SeriesSum series(n);
    int result = series.computeSum();

    cout << "sum of the series - " << result << endl;

    return 0;
}
