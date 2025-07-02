#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = x + (y * 4);
        if (y > 2)
        {
            if (y % 2 == 0)
            {
                int b = y / 2;
                if (x / 7 <= b)
                {
                    cout << b << "\n";
                }
                else
                {
                    x -= (b * 7);
                    if (x % 15 == 0)
                    {
                        cout << b + x / 15 << "\n";
                    }
                    else
                    {
                        cout << b + x / 15 + 1 << "\n";
                    }
                }
            }
            else
            {
                int b = y / 2 ;
                if (x / 7 <= b)
                {
                    cout << b+1 << "\n";
                }
                else
                {
                    x -= (b * 7);
                    x+=4;
                    if (x % 15 == 0)
                    {
                        cout << b + x / 15 << "\n";
                    }
                    else
                    {
                        cout << b + x / 15 + 1 << "\n";
                    }
                }
            }
        }
        else if (a % 15 == 0)
        {
            cout << a / 15 << "\n";
        }
        else
        {
            cout << a / 15 + 1 << "\n";
        }
    }
}