#include <iostream>
#include <string>
using namespace std;

bool canBeDivisibleBy9(const string& n) {
    int sum_of_digits = 0;

    // Calculate the initial sum of digits
    for (char c : n) {
        sum_of_digits += (c - '0');
    }

    // If the current sum is already divisible by 9
    if (sum_of_digits % 9 == 0) {
        return true;
    }

    // Try replacing each digit x with x^2 and check divisibility
    for (char c : n) {
        int x = c - '0';
        if (x == 2 || x == 3) {  // Only digits 2 and 3 can be squared to form a valid digit
            int squared = (x == 2) ? 4 : 9;  // 2^2 = 4, 3^2 = 9
            int new_sum = sum_of_digits - x + squared;
            if (new_sum % 9 == 0) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;
        cout << (canBeDivisibleBy9(n) ? "YES" : "NO") << "\n";
    }

    return 0;
}
