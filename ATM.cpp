#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    double z;
    cin >> x >> y;
    
    if (static_cast<int>(x) % 5 == 0 && y >= x)
    {
        z = y - x - 0.50;
        if (z >= 0)
        {
            cout << fixed << setprecision(2) << z;
        }
        else
        {
            cout << fixed << setprecision(2) << y;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << y;
    }
    
    return 0;
}
