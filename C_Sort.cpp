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
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<vector<int>> count(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < 26; ++j)
        {

            count[i + 1][j] = count[i][j];
        }

        count[i + 1][a[i] - 'a']++;
        count[i + 1][b[i] - 'a']--;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // string subA = a.substr(l - 1, r - l + 1), subB = b.substr(l - 1, r - l + 1);
        int cnt = 0;
        l--;
        // map<char, int> mpA, mpB;
        // for (char ch : subA)
        //     mpA[ch]++;
        // for (char ch : subB)
        //     mpB[ch]++;

        for (char ch = 0; ch < 26; ch++)
        {
            cnt += max(0, count[r][ch] - count[l][ch]);
        }
        cout << cnt << endl;
    }
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
