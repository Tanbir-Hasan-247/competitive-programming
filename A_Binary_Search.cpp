#include <bits/stdc++.h>
using namespace std;
vector<int> a;
bool binary_search(int l, int h, int x)
{
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (a[m] == x)
            return true;
        else if (a[m] < x)
            l = m + 1;
        else
            h = m - 1;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int x;
        cin >> x;
        cout << (binary_search(0, n - 1, x) ? "YES" : "NO") << "\n";
    }
}