#include <iostream>
#include <vector>

using namespace std;

int min_operations_to_zero(int l, int r) {
    int max_num = r;
    int operations = 0;
    while (max_num > 0) {
        max_num /= 3;
        operations++;
    }
    return operations + (r - l);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    vector<int> results;
    while (t--) {
        int l, r;
        cin >> l >> r;
        results.push_back(min_operations_to_zero(l, r));
    }
    
    for (int result : results) {
        cout << result << '\n';
    }

    return 0;
}
