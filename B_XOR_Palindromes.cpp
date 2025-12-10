#include <bits/stdc++.h>
using namespace std;

string palindromes(int n, string &s)
{
    string result(n + 1, '0');
    int ans = 0;
    int max_1 = 0;
    int max_2 = 0;

    for (int i = 0; i <= n / 2 - 1; i++)
    {
        if (s[i] == s[n - i - 1])
            max_2++;
        else
            ans++;
    }

    if (n % 2 == 1)
        max_1++;

    for (int j = 0; j <= max_2; j++)
    {
        for (int k = 0; k <= max_1; k++)
        {
            result[ans + j * 2 + k] = '1';
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n < 1)
        {
            continue;
        }

        string s;
        cin >> s;

        if (s.length() != n)
        {
            continue;
        }

        string result = palindromes(n, s);
        cout << result << "\n";
    }

    return 0;
}
