<<<<<<< HEAD
/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 18:47:19 30/11/2025
 **/
=======
>>>>>>> 7122b130e695c76d6e224bca54abbc4e687f7091
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
<<<<<<< HEAD
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
=======
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
>>>>>>> 7122b130e695c76d6e224bca54abbc4e687f7091
#define endl "\n"

void solve()
{
    string p, s;
    cin >> p >> s;

<<<<<<< HEAD
    int i = 0, j = 0;
    while (i < p.size())
    {

        if (p[i] != s[j])
        {
            cout << "NO" << endl;
            return;
        }
        j++;

        if (i + 1 < p.size())
        {
            if (j < s.size() && p[i] == s[j] && p[i + 1] != s[j])
                j++;
        }
        else
        {
            if (j < s.size() && p[i] == s[j])
                j++;
        }

        i++;
    }

    if (i == p.size() && j == s.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

=======
    vector<pair<char, int>> groupS, groupP;

    // Group s
    char current = s[0];
    int count = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == current)
            count++;
        else
        {
            groupS.emplace_back(current, count);
            current = s[i];
            count = 1;
        }
    }
    groupS.emplace_back(current, count);

    // Group p
    current = p[0];
    count = 1;
    for (int i = 1; i < p.size(); ++i)
    {
        if (p[i] == current)
            count++;
        else
        {
            groupP.emplace_back(current, count);
            current = p[i];
            count = 1;
        }
    }
    groupP.emplace_back(current, count);

    if (groupP.size() != groupS.size())
    {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < groupP.size(); ++i)
    {
        if (groupP[i].first != groupS[i].first)
        {
            cout << "NO\n";
            return;
        }

        int pCount = groupP[i].second;
        int sCount = groupS[i].second;

        if (sCount < pCount || sCount > 2 * pCount)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}


>>>>>>> 7122b130e695c76d6e224bca54abbc4e687f7091
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
