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
        string s[3][n];
        map<string, int> m;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                m[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (m[s[i][j]] == 1)
                {
                    count += 3;
                }
                else if (m[s[i][j]] == 2)
                {
                    count += 1;
                }
            }
            cout << count << " ";
        }
        cout << "\n";
    }
}