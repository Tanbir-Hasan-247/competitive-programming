#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        int mx[n + 3];
        int mxx = 0;
        int mn[n + 3];
        int mnn = INT_MAX;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            mxx = max(mxx, v[i].second);
            mx[i] = mxx;
            mnn = min(mnn, v[i].second);
            mn[i] = mnn;
        }
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
        {
            int ind = i + 1;
            int x = mx[i] - mn[i] + 1;
            int val = v[i].first;
            mp[val] = max(mp[val], x * 2);
        }
        for (int i = 1; i <= k; i++)
        {
            cout << mp[i] << " ";
        }
        cout << "\n";
    }
}
