#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        if (n % 7 == 0)
        {
            cout << n / 7 << "\n";
        }
        else
        {
            cout << (n / 7) + 1 << "\n";
        }
    }
    return 0;
}