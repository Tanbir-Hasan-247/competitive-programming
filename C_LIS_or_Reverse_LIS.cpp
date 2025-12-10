#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int a = 0, b = 0;
        for (auto x : mp)
        {
            if (x.second > 1)
            {
                b++;
            }
            else
            {
                a++;
            }
        }
        cout << (a + 1) / 2 + b << "\n";
    }
}