#include <bits/stdc++.h>
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

int fun(int n,vector<int>& a)
{
    map<ll, ll> map;
    ll sum = 0, ans = 0, last_index = -1;

    map[0] = -1;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (map.count(sum))
        {
            int prev_index = map[sum];

            if (prev_index >= last_index)
            {
                ans++;
                last_index = i;
            }
        }

        map[sum] = i;
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << fun(n,a) << endl;
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
