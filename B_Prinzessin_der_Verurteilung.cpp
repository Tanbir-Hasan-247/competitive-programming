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
#define endl "\n"

vector<string> v;

void mex()
{
    string ss = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
    {
        v.push_back(string(1, ss[i]));
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            v.push_back(string() + ss[i] + ss[j]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                v.push_back(string() + ss[i] + ss[j] + ss[k]);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (const auto &ch : v)
    {
        if (s.find(ch) == string::npos)
        {
            cout << ch << endl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    mex();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
