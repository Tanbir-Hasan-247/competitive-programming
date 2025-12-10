#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        long long int tents = 0;
        tents += a;

        tents += b / 3;
        b %= 3;
        if (b != 0 && b + c >= 3)
        {
            while (b != 3)
            {
                b++;
                c--;
            }
            tents += 1;
            tents += (c / 3);
            if (c % 3 != 0)
            {
                tents++;
            }
            cout << tents << "\n";
            continue;
        }
        else if (b == 0)
        {
            tents += (c / 3);
            if (c % 3 != 0)
            {
                tents++;
            }
            cout << tents << "\n";
            continue;
        }
        cout << -1 << "\n";
    }

    return 0;
}