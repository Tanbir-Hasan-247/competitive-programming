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

    vector<char> v = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

    int i = (n / 7) * 7;
    n -= i;
    // cout<<i<<endl;

    while (i)
    {
        for (auto c : v)
        {
            if (i == 0)
                break;

            cout << c;
            i--;
        }
    }
    if (n < 5)
    {
        for (int j = 3; n; j++)
        {
            cout << v[j];
            n--;
        }
    }
    else
    {
        for (int j = 0; n; j++)
        {
            cout << v[j];
            n--;
        }
    }
    cout << endl;
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
