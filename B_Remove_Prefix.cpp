#include <bits/stdc++.h>
using namespace std;
void remove_prefix(vector<int> &a, int n)
{
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.count(a[i]))
        {
            cout << i + 1 << "\n";
            return;
        }
        s.insert(a[i]);
    }
    cout << 0 << "\n";
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
        remove_prefix(a, n);
    }
}