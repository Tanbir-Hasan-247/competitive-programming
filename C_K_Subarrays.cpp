#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ai(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ai[i];
        }

        int g = ai[0];
        for (int i = 1; i < n; ++i)
        {
            g = __gcd(g, ai[i]);
        }

        int c = 0;
        int newG = 0;
        for (int i = 0; i < n; ++i)
        {
            newG = __gcd(newG, ai[i]);
            if (newG == g)
            {
                c += 1;
                newG = 0;
                if (c == k)
                {
                    break;
                }
            }
        }

        if (c == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
