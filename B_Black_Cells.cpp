#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a given k can satisfy the painting requirement
bool can_paint_all(const vector<long long>& a, int n, long long k) {
    int extra_needed = 0;
    
    for (int i = 1; i < n; i++) {
        // Calculate the distance between consecutive cells
        long long gap = a[i] - a[i - 1];
        
        // If the gap between consecutive cells is too large for k
        if (gap >= 2 * k) {
            extra_needed++;
        }
        
        // If more than one extra cell is needed, k is too small
        if (extra_needed > 1) return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the list of cells
       sort(a.begin(), a.end());
        
        // Binary search on k
        long long left = 1, right = 1e18, result = right;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            
            if (can_paint_all(a, n, mid)) {
                result = mid;  // Possible to paint with k = mid
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
