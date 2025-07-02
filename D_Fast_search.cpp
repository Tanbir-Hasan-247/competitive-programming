#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n;

int binary_search(int low, int high, int a, int b)
{
    int l = low, h = high, x = -1, y = -1;
    
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (v[m] >= a)
        {
            x = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    l = low, h = high;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (v[m] <= b)
        {
            y = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }

    if (x == -1 || y == -1 || x > y)
        return 0;

    return y - x + 1;
}

int main()
{

    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        cout << binary_search(0, n - 1, l, r) << " ";
    }
    cout << endl;
}
