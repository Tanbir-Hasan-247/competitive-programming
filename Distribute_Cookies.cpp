#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll rem = m % n;
        if (n > m)
        {
            cout << n - rem << "\n";
        }
        else
        {
            cout << min(rem, abs(n - rem)) << "\n";
        }
    }
    return 0;
}
