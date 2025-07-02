#include <bits/stdc++.h>
using namespace std;
bool isSuperincreasing(int n, int k, int x)
{
    vector<int> a(n);
    a[k - 1] = x;

    for (int i = k - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            if (a[i] <= 1)
                return false;
            continue;
        }
        a[i - 1] = a[i] - 1;
    }

    for (int i = k; i < n; i++)
    {
        a[i] = a[i - 1] * 2;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (isSuperincreasing(n, k, x))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
