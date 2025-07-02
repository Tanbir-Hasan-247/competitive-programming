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
        string r = s;
        int count = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
                count++;
        }

        if (count == s.size())
            cout << "NO" << "\n";
        else
        {
            sort(s.begin(), s.end());
            if (s == r)
            {
                reverse(s.begin(), s.end());
                cout << "YES" << "\n";
                cout << s << "\n";
            }
            else
            {
                cout << "YES" << "\n";
                cout << s << "\n";
            }
        }
    }

    return 0;
}