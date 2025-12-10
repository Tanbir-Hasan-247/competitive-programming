#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // size of the array

        vector<int> x(n);
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> x[i]; // input array x
        }

        // Set first element of a to 1, since there's no a_0
        a[0] = 1;

        // Constructing array a
        for (int i = 1; i < n; ++i) {
            // Choose any value for a[i] satisfying the condition x[i] = a[i] % a[i-1]
            a[i] = x[i] + a[i-1];
        }

        // Output array a
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

