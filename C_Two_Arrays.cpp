#include <bits/stdc++.h>
using namespace std;

void check(vector<int> &a, vector<int> &b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] + 1 != b[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        check(a, b, n);
    }
}