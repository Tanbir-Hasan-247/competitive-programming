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
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0;
    char f = '0';

    for (int i=0;i<n;i++)
    {
        if (s[i] != f)
        {
            cnt1++;
            f = s[i] ;
        }
        cnt2++;
    }
    
    if (cnt1 <= 1)
    {
        cout << cnt1 + cnt2 << endl;
        return;
    }
    if (cnt1 == 2)
    {
        cout << cnt1 + cnt2 - 1 << endl;
        return;
    }

    cout << cnt1 + cnt2 - 2 << endl;
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
