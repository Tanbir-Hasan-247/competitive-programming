#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n == 2)
        {
            cout << stoi(s) << "\n";
        }
        else
        {
            long long ans = LLONG_MAX;
            for (int i = 1; i < n; ++i)
            {
                vector<int> a;
                for (int j = 0; j < n; ++j)
                {
                    if (j != i && j != i - 1)
                    {
                        a.push_back(s[j] - '0');
                    }
                    else
                    {
                        if (j == i)
                        {
                            a.push_back((s[j - 1] - '0') * 10 + (s[j] - '0'));
                        }
                    }
                }
                if (find(a.begin(), a.end(), 0) != a.end())
                {
                    ans = 0;
                }
                else
                {
                    long long sum = 0;
                    for (int num : a)
                    {
                        sum += (num != 1) ? num : 0;
                    }
                    ans = min(ans, max(1LL, sum));
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;
}
