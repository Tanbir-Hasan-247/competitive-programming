#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, int> m;

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            m[s[i]] = 1;
        }

        for (int i = 0; i < n; i++) {
            bool f = false;

            for (int j = 1; j < s[i].size(); j++) {
                string a = s[i].substr(0, j);
                string b = s[i].substr(j);
                if (m[a] && m[b]) {
                    cout << "1";
                    f = true;
                    break;
                }
            }
            if (!f) {
                cout << "0";
            }
        }
        cout << "\n";
    }
    return 0;
}
