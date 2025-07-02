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
        map<char, int> m;

        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' && m['0'] > 0)
            {
                m['0']--;
            }
            else if (s[i] == '0' && m['1'] > 0)
            {
                m['1']--;
            }
            else
            {
                cnt = s.size() - i;
                break;
            }
        }
        cout << cnt << "\n";
    }
}