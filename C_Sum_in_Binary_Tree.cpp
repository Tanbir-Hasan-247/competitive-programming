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
        ll sum = 0;
        while (n > 0)
        {
            sum += n;
            n = n >> 1;
        }
        cout << sum << "\n";
    }
    return 0;
}