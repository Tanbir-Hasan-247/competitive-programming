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
    map<char, int> mp1, mp2;

    for (int i = 0; i < n; i++)
    {
        mp2[s[i]]++;
    }

    int maxi = 2;

    for (int i = 0; i < n - 1; i++)
    {
        mp1[s[i]]++;
        if (mp2[s[i]] == 1)
        {
            mp2.erase(s[i]);
        }
        else
        {
            mp2[s[i]]--;
        }
        int candidate = mp1.size() + mp2.size();
        maxi = max(maxi, candidate);
    }

    cout << maxi << endl;
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
