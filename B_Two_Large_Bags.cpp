#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto i : mp)
    {
        pq.push(i.first);
    }

    while (!pq.empty())
    {
        int x = pq.top();
        pq.pop();

        if (mp[x] >= 2)
        {
            mp[x + 1] += (mp[x] - 2);
            mp[x] = 2;

            pq.push(x + 1);
        }
    }

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
