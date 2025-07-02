#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        s += s;
        n += n;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (ch == s[i])
            {
                int cnt1 = 0;
                // int j = i;
                while (s[i] != 'g' && i < n)
                {
                    cnt1++;
                    i++;
                }
                cnt2 = max(cnt2, cnt1);
            }
        }
        cout << cnt2 << "\n";
    }
    return 0;
}
