#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> mp;
    for (auto ch : s)
    {
        mp[ch]++;
    }

    vector<int> v;
    for (auto [key, val] : mp)
    {
        v.pb(val);
    }

    sortDesc(v); 

    int sum = 0;
    for (int i = 1; i < v.size(); i++)
    {
        sum += v[i];
    }

    int cnt = v[0];

    if (cnt <= sum)
        cout << (n % 2) << endl;
    else
        cout << (cnt - sum) << endl; 
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
