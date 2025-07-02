#include <bits/stdc++.h>
using namespace std;

vector<int> p(100100);

int bin_search(int num, int l, int r)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (num > p[mid - 1] && num <= p[mid])
        {
            break;
        }
        if (p[mid] > num)
        {
            r = mid - 1;
        }
        else if (p[mid] < num)
        {
            l = mid + 1;
        }
    }
    return mid;
}

int main()
{
    int n, m, q;
    while (cin >> n)
    {
        cin >> p[1];
        for (int i = 1; i < n; i++)
        {
            int a;
            cin >> a;
            p[i + 1] = p[i] + a;
        }
        cin >> q;
        while (q--)
        {
            cin >> m;
            cout << bin_search(m, 1, n) << endl;
        }
    }
    return 0;
}
