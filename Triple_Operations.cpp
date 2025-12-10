#include <iostream>
#include <cmath>
using namespace std;

int min_operations(int num) {
    int operations = 0;
    while (num > 0) {
        if (num % 3 == 0) {
            num /= 3;
        } else {
            num = num * 3;
        }
        operations++;
    }
    return operations;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        int total_operations = 0;
        for (int i = l; i <= r; i++) {
            total_operations += min_operations(i);
        }
        
        cout << total_operations << endl;
    }

    return 0;
}
