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
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    vector<int> candidates = {a4 - a2, a5 - a4, a1 + a2};
    int max_fib = 0;

    for (int a3 : candidates)
    {
        int count = 0;
        if (a3 == a1 + a2)
            count++;
        if (a4 == a2 + a3)
            count++;
        if (a5 == a3 + a4)
            count++;
        max_fib = max(max_fib, count);
    }

    cout << max_fib << endl;
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
