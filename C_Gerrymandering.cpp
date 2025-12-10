#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Number of columns
        string row1, row2;
        cin >> row1 >> row2;  // The two rows
        
        int max_votes = 0;  // Maximum number of districts Álvaro can win
        
        // Iterate over each 3-column segment
        for (int i = 0; i < n; i += 3) {
            // Count votes in the current 3-column segment
            int count_A = 0;
            int count_J = 0;

            // Count A and J in the segment of columns [i, i+1, i+2]
            for (int j = 0; j < 3; ++j) {
                if (row1[i + j] == 'A') count_A++;
                else count_J++;
                
                if (row2[i + j] == 'A') count_A++;
                else count_J++;
            }

            // Determine the maximum number of votes Álvaro can win in this segment
            if (count_A >= 2) {
                max_votes++;  // Álvaro wins this district
            }
        }

        // Output the maximum number of districts Álvaro can win
        cout << max_votes << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  // For faster input/output
    
    solve();
    
    return 0;
}
