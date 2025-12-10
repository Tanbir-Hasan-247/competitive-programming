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
        int max_a = 0, min_a = INT_MAX;
        while (n--)
        {
            int t;
            cin >> t;
            max_a |= t;
            min_a &= t;
        }
        cout << max_a - min_a << '\n';
    }
    return 0;
}