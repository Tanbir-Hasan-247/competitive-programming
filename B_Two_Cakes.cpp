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
        ll x = n / 9;
        ll rem = n % 9;

        ll sum1 = x * 45;

        ll sum2 = rem * (rem + 1) / 2;

        cout << sum1 + sum2 << "\n";
    }
    return 0;
}
