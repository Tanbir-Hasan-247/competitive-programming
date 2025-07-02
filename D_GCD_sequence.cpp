#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to compute the GCD of two numbers
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if the GCD sequence is non-decreasing
bool isNonDecreasing(const vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; ++i) {
        if (gcd(a[i-1], a[i]) < gcd(a[i], a[i+1])) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Check the original array
        if (isNonDecreasing(a)) {
            cout << "YES" << endl;
            continue;
        }
        
        bool found = false;
        
        // Try removing each element and check the sequence
        for (int i = 0; i < n; ++i) {
            vector<int> b;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    b.push_back(a[j]);
                }
            }
            if (isNonDecreasing(b)) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
