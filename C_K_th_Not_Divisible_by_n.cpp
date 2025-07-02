#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = (k - 1) / (n - 1);
        cout << k + x << "\n";
    }

    return 0;
}