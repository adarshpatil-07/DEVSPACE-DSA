#include <iostream>
using namespace std;

int main() {
    int n, original, digit, digits = 0, sum = 0;
    cin >> n;

    original = n;

    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
