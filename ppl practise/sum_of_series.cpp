#include <iostream>
using namespace std;

class SeriesSum {
    double result;

public:
    SeriesSum() {
        result = 0;
    }

    SeriesSum(int n) {
        result = 0;
        for (int i = 1; i <= n; i++) {
            result += i;
        }
    }

    SeriesSum(double a, double r, int n) {
        result = 0;
        for (int i = 0; i < n; i++) {
            result += a + i * r;
        }
    }

    double getSum() {
        return result;
    }
};

int main() {
    SeriesSum arithmeticSum;
    SeriesSum geometricSum(1.0, 2.0, 5);
    SeriesSum naturalSum(5);

    cout << "Sum of first 5 natural numbers: " << naturalSum.getSum() << endl;
    cout << "Sum of the first 5 terms of the series 1, 3, 5, 7, 9: " << arithmeticSum.getSum() << endl;
    cout << "Sum of the first 5 terms of a geometric series with a = 1.0 and r = 2.0: " << geometricSum.getSum() << endl;

    return 0;
}
