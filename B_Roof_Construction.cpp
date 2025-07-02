#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int k = 1;
        while (2 * k <= n - 1)
        {
            k *= 2;
        }

        for (int i = k - 1; i >= 0; i--)
        {
            cout << i << " ";
        }

        for (int i = k; i < n; i++)
        {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}
