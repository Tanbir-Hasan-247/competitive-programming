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
    int n, k;
    cin >> n >> k;

    int zero = n - k;

    string s = "", ss = "";

    bool ok = true;
    while (zero && k)
    {
        if (ok)
        {
            s += "1";
            ss += "0";
            ok = false;
            zero--;
            k--;
        }
        else
        {
            s += "0";
            ss += "1";
            ok = true;
            zero--;
            k--;
        }
    }
    while (zero || k)
    {
        if (k)
        {
            s += "1";
            k--;
        }
        if (zero)
        {
            s += "0";
            zero--;
        }
    }

    reverse(ss.begin(), ss.end());

    cout << s + ss << endl;
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
