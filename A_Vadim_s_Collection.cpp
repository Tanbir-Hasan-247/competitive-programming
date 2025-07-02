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
    string s;
    cin >> s;

    vector<int> freq(10, 0);
    for (char ch : s)
    {
        freq[ch - '0']++;
    }

    vector<int> order = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string result;

    for (int val : order)
    {
        for (int d = 0; d < 10; ++d)
        {
            if (freq[d] > 0 && d >= val)
            {
                result += (char)(d + '0');
                freq[d]--;
                break;
            }
        }
    }

    cout << result << endl;
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
