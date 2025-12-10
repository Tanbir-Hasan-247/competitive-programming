#include <bits/stdc++.h>
using namespace std;

const int modulo = 1e9 + 7;

int countWays(int n, int d, vector<int> &a)
{
    int sum = 0;
    for (int num : a)
    {
        sum += num;
    }

    if ((sum + d) % 2 != 0)
    {
        return 0;
    }

    int target = (sum + d) / 2;

    vector<int> dp(target + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = target; j >= a[i]; j--)
        {
            dp[j] = (dp[j] + dp[j - a[i]]) % modulo;
        }
    }

    return dp[target];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << countWays(n, d, a) << "\n";
    }

    return 0;
}
