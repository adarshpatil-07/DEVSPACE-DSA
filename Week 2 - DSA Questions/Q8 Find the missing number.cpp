#include <iostream>
using namespace std;

int main() {
    int n, a[1000], sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int total = n * (n + 1) / 2;

    cout << total - sum;

    return 0;
}
