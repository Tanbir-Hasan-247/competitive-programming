#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx1 = max(a, b);
        int mx2 = max(c, d);
        if (mx1 > mx2)
        {
            if (a < b)
            {
                if (a <= c && c <= b || a <= d && d <= b)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (b <= c && c <= a || b <= d && d <= a)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
        {
            if (c < d)
            {
                if (c <= a && a <= d || c <= d && b <= d) 
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                if (d <= a && a <= c || d <= b && b <= c)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}