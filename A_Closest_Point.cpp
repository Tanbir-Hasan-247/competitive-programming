#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canAddPoint(const vector<int>& points) {
    int n = points.size();
    for (int i = 1; i < n; ++i) {
        // Check if the midpoint between points[i-1] and points[i] is a valid integer
        int mid = (points[i] + points[i-1]) / 2;
        if ((points[i] + points[i-1]) % 2 == 0 && mid != points[i-1] && mid != points[i]) {
            bool is_closest = true;
            for (int j = 0; j < n; ++j) {
                if (points[j] == mid) {
                    is_closest = false;
                    break;
                }
                if (abs(mid - points[j]) < abs(points[j] - points[i]) || abs(mid - points[j]) < abs(points[j] - points[i-1])) {
                    is_closest = false;
                    break;
                }
            }
            if (is_closest) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }
        if (canAddPoint(points)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
