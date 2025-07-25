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
    string a;
    cin >> a;

    string b = a;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        char ch = a[n - 1 - i];
        if (ch == 'p')
            b[i] = 'q';
        else if (ch == 'q')
            b[i] = 'p';
        else
            b[i] = 'w';
    }

    cout << b << endl;
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
