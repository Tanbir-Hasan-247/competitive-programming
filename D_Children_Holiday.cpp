#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canInflate(int m, int n, const vector<int>& t, const vector<int>& z, const vector<int>& y, int time) {
    vector<int> balloons(m, 0);

    for (int i = 0; i < n; ++i) {
        int count = min(z[i], time / (t[i] + y[i]));
        for (int j = 0; j < count; ++j) {
            balloons[j * t[i]]++;
        }
    }

    for (int i = 0; i < m; ++i) {
        if (balloons[i] == 0) {
            return false;
        }
    }

    return true;
}

pair<int, vector<int>> inflateBalloons(int m, int n, const vector<int>& t, const vector<int>& z, const vector<int>& y) {
    int low = 0, high = 1e9;
    int ansTime = 0;
    vector<int> ansDistribution(n, 0);

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canInflate(m, n, t, z, y, mid)) {
            ansTime = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    vector<int> balloonsCount(m, 0);
    for (int i = 0; i < n; ++i) {
        int count = min(z[i], ansTime / (t[i] + y[i]));
        for (int j = 0; j < count; ++j) {
            balloonsCount[j * t[i]]++;
            ansDistribution[i]++;
        }
    }

    return make_pair(ansTime, ansDistribution);
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> t(n), z(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i] >> z[i] >> y[i];
    }

    pair<int, vector<int>> result = inflateBalloons(m, n, t, z, y);
    cout << result.first << endl;
    for (int i = 0; i < n; ++i) {
        cout << result.second[i] << " ";
    }
    cout << endl;

    return 0;
}
