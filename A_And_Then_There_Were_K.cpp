#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        while (n != 0)
        {
            cnt++;
            n = n / 2;
        }
        cout << (1 << (cnt - 1)) - 1 << "\n";
    }

    return 0;
}