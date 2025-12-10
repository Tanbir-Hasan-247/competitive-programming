#include <bits/stdc++.h>
using namespace std;
const int s = 1e+6;
int a[s];
int main()
{
    int m, tmp;
    for (int i = 1; i <= s; i++)
    {
        tmp = i;
        int sum = 0;
        while (tmp > 0)
        {
            m = tmp % 10;
            sum = sum + m;
            tmp = tmp / 10;
        }
        a[i] = (sum + a[i - 1]);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }

    return 0;
}