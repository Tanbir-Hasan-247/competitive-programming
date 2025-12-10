#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int mx = 0;

        if (y > 2 * x)
        {
            mx = (n / 2) * y + (n % 2) * x;
        }
        else
        {
            mx = n * x;
        }

        cout << mx << "\n";
    }

    return 0;
}
