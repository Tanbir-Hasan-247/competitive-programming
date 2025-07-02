#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<pair<char, char>> v;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == '1' && s[i + 1] == '0') || s[i] == '0' && s[i + 1] == '1')
            {
                v.push_back({s[i], s[i + 1]});
            }
        }
        cout << v.size() << "\n";
    }
}