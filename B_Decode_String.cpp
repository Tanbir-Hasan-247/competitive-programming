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

        for (int i = 0; i < n;)
        {
            if (i + 2 < n && s[i + 2] == '0' && s[i + 3] != '0')
            {
                string ch = s.substr(i, 2);
                int x = stoi(ch);
                cout << char(96 + x);
                i += 2;
            }
            else if (s[i] == '0')
            {
                i++;
                continue;
            }
            else
            {
                int x = s[i] - '0';
                cout << char(96 + x);
                i++;
            }
        }
        cout << "\n";
    }

    return 0;
}
