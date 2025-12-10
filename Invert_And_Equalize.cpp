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
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == '0')
            {
                while (i < n && s[i] != '1')
                {
                    i++;
                }
                a++;
            }
            else 
            {
                while (i < n && s[i] != '0')
                {
                    i++;
                }
                b++;
            }
        }
        int x=min(a, b);
        cout << x << "\n";
    }
}
