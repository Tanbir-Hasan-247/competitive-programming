#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r1, r2, r3, r4, r5;
        cin >> r1 >> r2 >> r3 >> r4 >> r5;
         if (r1 + r2 + r3 + r4 + r5 >= 4)
           cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}