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
        string s;
        cin >> s;
        int ans = n+1;
        for (int i = 'a'; i <= 'z'; i++)
        {
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == i)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == i)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt = n + 1;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
}