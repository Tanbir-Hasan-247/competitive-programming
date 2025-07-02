#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long r1 = c / a;
        long long r2 = c / b;
        cout << r1 + r2 + 2 << "\n";
    }
}