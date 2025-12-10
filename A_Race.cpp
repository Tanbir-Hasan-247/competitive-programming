#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        bool ok = false;

        for (int b = 1; b <= 100; b++)
        {
            if (b == a)
                continue;

            int x1 = abs(b - x);
            int y1 = abs(b - y);
            int x2 = abs(a - x);
            int y2 = abs(a - y);

            if (x1 < x2 && y1 < y2)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
