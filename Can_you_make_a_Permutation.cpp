#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        unordered_set<int> elements;
        for (int i = 1; i <= n; i++) 
        {
            elements.insert(i);
        }
        for (int i = 0; i < n; i++) 
        {
            int num;
            cin >> num;
            elements.erase(num);
        }
        if (elements.size() <= k) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }

    return 0;
}
