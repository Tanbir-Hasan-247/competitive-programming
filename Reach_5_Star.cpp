#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int z;
    if (y > 0)
        z = x + y;
    else
        z = x - abs(y);
    if (z >= 2000)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
