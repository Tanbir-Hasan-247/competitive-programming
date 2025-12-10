#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int r = (100 - x);
        int y = r / 10;

        cout << 10 * y << "\n";
    }

    return 0;
}
