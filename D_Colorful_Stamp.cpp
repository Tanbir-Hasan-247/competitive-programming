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
        cin >> s1;
        s2.resize(n); 
        for (int i = 0; i < n; i++)
        {
            s2[i] = 'W'; 
        }
        for (int i = 0; i < n - 1; i++)
        { 
            if (s2[i] != s1[i] && s1[i + 1] != 'W')
            {
                if (s1[i] == 'B')
                    s2[i] = 'B', s2[i + 1] = 'R';
                if (s1[i] == 'R')
                    s2[i] = 'R', s2[i + 1] = 'B';
            }
        }
        for (int i = n - 1; i > 0; i--)
        { 
            if (s2[i] != s1[i] && s1[i - 1] != 'W')
            {
                if (s1[i] == 'B')
                    s2[i] = 'B', s2[i - 1] = 'R';
                if (s1[i] == 'R')
                    s2[i] = 'R', s2[i - 1] = 'B';
            }
        }
        bool x = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                x = false;
                break;
            }
        }
        x ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
