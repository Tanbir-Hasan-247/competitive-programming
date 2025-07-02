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
        vector<int> up, lw;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                s[i] = ' ';
                if (!up.empty())
                {
                    s[up.back()] = ' ';
                    up.pop_back();
                }
                continue;
            }
            if (s[i] == 'b')
            {
                s[i] = ' ';
                if (!lw.empty())
                {
                    s[lw.back()] = ' ';
                    lw.pop_back();
                }
                continue;
            }
            if ('a' <= s[i] && s[i] <= 'z')
                lw.push_back(i);
            else
                up.push_back(i);
        }
        for (char ch : s)
        {
            if (ch != ' ')
                cout << ch;
        }
        cout << "\n";
    }
}