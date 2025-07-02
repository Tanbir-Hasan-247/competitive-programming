#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, int>> spells(N);
        for (int i = 0; i < N; ++i) {
            cin >> spells[i].first >> spells[i].second; // V_i and A_i
        }

        int max_strength = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int V_i = spells[i].first;
                int A_i = spells[i].second;
                int V_j = spells[j].first;
                int A_j = spells[j].second;
                int combined_strength = A_i * V_j + V_i * A_j;
                max_strength = max(max_strength, combined_strength);
            }
        }

        cout << max_strength << endl;
    }

    return 0;
}
