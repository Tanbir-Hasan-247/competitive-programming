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
        string s1, s2;
        cin >> s1 >> s2;
        bool x = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i] || (s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G'))
            {
                x = true;
            }
            else
            {
                x = false;
                break;
            }
        }
        x ? cout << "YES\n" : cout << "NO\n";
    }
}