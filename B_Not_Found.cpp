#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool present[26] = {false};

    for (char c : s)
    {
        present[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!present[i])
        {
            cout << char('a' + i) << "\n";
            return 0;
        }
    }

    cout << "None" << "\n";

    return 0;
}