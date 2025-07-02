#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    while (r < n)
    {
        while (a[l] < b[r] && l < m)
        {
            l++;
        }
        r++;
        cout << l << " ";
    }
    cout << "\n";
}