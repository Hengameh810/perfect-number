#include <iostream>
using namespace std;

bool isPerfectNumber(int n) {
    if (n <= 1) return false;

    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
