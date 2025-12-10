#include <bits/stdc++.h>
using namespace std;
bool is_kakindrom(vector<int> &a, int n)
{
    int rem;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            rem = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != rem)
        {
            b.push_back(a[i]);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != b[b.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ans = is_kakindrom(a, n);
        if (!ans)
        {
            reverse(a.begin(), a.end());
            ans = is_kakindrom(a, n);
        }
        ans ? cout << "YES\n" : cout << "NO\n";
    }
}