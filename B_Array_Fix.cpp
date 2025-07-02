#include <bits/stdc++.h>
using namespace std;

bool can_sort(vector<int> &v, int n)
{
    vector<int> b({v[n - 1]});

    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] > b.back())
        {
            b.push_back(v[i] % 10);
            b.push_back(v[i] / 10);
        }
        else
        {
            b.push_back(v[i]);
        }
    }
    return is_sorted(b.rbegin(), b.rend());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        cout << (can_sort(v, n) ? "YES\n" : "NO\n");
    }
    return 0;
}
