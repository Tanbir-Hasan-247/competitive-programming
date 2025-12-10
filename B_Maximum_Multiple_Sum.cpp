#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxSum = 0;
        int ans = 2;

        for (int x = 2; x <= n; x++)
        {
            int sum = 0;
            for (int k = 1; k * x <= n; k++)
            {
                sum += k * x;
            }
            if (sum > maxSum)
            {
                maxSum = sum;
                ans = x;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
