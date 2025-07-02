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
        set<char> st(s.begin(), s.end());
        string r(st.begin(), st.end());

        int len = r.length();
        map<char, char> mp;

        for (int i = 0; i < len; ++i)
        {
            mp[r[i]] = r[len - 1 - i];
        }

        string str = s;
        for (int i = 0; i < n; ++i)
        {
            str[i] = mp[s[i]];
        }

        cout << str << '\n';
    }
    return 0;
}
