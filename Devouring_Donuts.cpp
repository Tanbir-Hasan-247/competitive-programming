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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0, j = n - 1;
        int sum = 0;
        if (n % 2 == 0)
        {
            while (i < j)
            {
                sum += abs((a[i] - a[j]));
                i++;
                j--;
            }
        }
        else
        {
            while (i < j)
            {
                sum += abs((a[i] - a[j]));
                i++;
                j--;
            }
            sum += abs(a[i]);
        }
        cout << sum << "\n";
    }

    return 0;
}