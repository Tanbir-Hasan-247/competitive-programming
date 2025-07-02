#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        for (int sum = 1; sum <= 100; sum++)
        {
            int cnt = 0;
            int i = 0, j = n - 1;
            while (i < j)
            {
                if (a[i] + a[j] > sum)
                    j--;
                else if (a[i] + a[j] < sum)
                    i++;
                else
                {
                    cnt++;
                    i++, j--;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }

    return 0;
}