#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        
        int total = a * n + b;
        if (total < s)
            cout << "NO\n";
        else
        {
            int x = total - s;
            if (x % n == 0 && x / n <= a)
                cout << "YES\n";
            else if (x / n > a && b >= (s % n))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
