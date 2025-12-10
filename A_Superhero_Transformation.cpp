#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << "No\n";
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (is_vowel(s[i]) != is_vowel(t[i]))
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}
