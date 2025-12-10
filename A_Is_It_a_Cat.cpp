#include <bits/stdc++.h>
using namespace std;
bool check(string s, int n)
{
    int i = 0, x = 0;
    for (; i < n; i++)
    {
        if (s[i] == 'm' || s[i] == 'M')
        {
            x++;
            continue;
        }
        else
        {
            break;
        }
    }
    if (x == 0)
        return false;
    else
        x = 0;
    for (; i < n; i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            x++;
            continue;
        }
        else
        {
            break;
        }
    }
    if (x == 0)
        return false;
    else
        x = 0;
    for (; i < n; i++)
    {
        if (s[i] == 'o' || s[i] == 'O')
        {
            x++;
            continue;
        }
        else
        {
            break;
        }
    }
    if (x == 0)
        return false;
    else
        x = 0;
    for (; i < n; i++)
    {
        if (s[i] == 'W' || s[i] == 'w')
        {
            x++;
            continue;
        }
        else if (s[i] != 'W' || s[i] != 'w')
        {
            return false;
        }
        else
        {
            break;
        }
    }
    if (x == 0)
        return false;
    return true;
}
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
        bool x = check(s, n);

        x ? cout << "YES\n" : cout << "NO\n";
    }
}