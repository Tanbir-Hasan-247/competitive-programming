#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    char odd_char = '\0';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string l = "", r = "", m = "";

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            m = string(freq[i], 'A' + i);
        }
        else
        {
            l += string(freq[i] / 2, 'A' + i);
        }
    }

    r = l;
    reverse(r.begin(), r.end());

    cout << l + m + r << "\n";

    return 0;
}
