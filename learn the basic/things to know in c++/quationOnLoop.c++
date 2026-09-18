//Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
#include <iostream>
using namespace std;

int main() {
    int d;
    int count = 0;
    long long sum = 0;

    cout << "Enter digit (0-9): ";
    cin >> d;

    for (int i = 1; count < 50; i++) {
        if (i % 10 == d) {
            sum += i;
            count++;
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}