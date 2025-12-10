#include <bits/stdc++.h>
using namespace std;

bool isPossible(string s1, string s2)
{
    int i = 0, j = 0;
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        i++;
    }
    return (j == s2.size());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    while (cin >> s1 >> s2)
    {
        if (isPossible(s1, s2))
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
    return 0;
}
