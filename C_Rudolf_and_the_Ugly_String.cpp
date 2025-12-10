#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll m = 0, a = 0, p = 0, e = 0, i = 0;

        for (ll j = 0; j < n; j++)
        {
            if (s[j] == 'm' && s[j + 1] == 'a' && s[j + 2] == 'p')
            {
                m++;
                j += 2;
            }

            else if (s[j] == 'p' && s[j + 1] == 'i' && s[j + 2] == 'e')
            {
                p++;
                j += 2;
            }
        }

        cout << m + p << "\n";
    }
    return 0;
}
