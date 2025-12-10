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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 1; 

    for (int i = 0; i < n; i++)
    {
        int cnt = 1;

        for (int j = i + 1; j < n && a[j] <= a[j - 1]; j++)
        {
            cnt++;
        }

        for (int j = i - 1; j >= 0 && a[j] <= a[j + 1]; j--)
        {
            cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
