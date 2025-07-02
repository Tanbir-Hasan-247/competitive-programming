#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int cnt = 0;
        while (true)
        {

            if (b / k >= a && b % k == 0)
            {
                b = b / k;
                cnt++;
            }
            else if (b % k == 0)
            {
                cnt += b - a;
                break;
            }
            else
            {
                cnt += b % k;
                b -= (b % k);
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
