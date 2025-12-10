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
        string s1 = s.substr(0, s.size() / 2);
        set<char> s2;
        for (char c : s1)
            s2.insert(c);
        string s3;
        for (char c : s2)
        {
            s3 += c;
        }
        string s4 = s3;
        reverse(s3.begin(), s3.end());
        cout << (s4 == s3 ? "NO\n" : "YES\n");
    }
    return 0;
}