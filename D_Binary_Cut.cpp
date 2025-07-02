#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                while (s[i] != '0' && i < s.size())
                {
                    i++;
                }
                if (s[i] != '1' && i != s.size())
                    x++;
            }
        }
        cout << x << endl;
    }
}