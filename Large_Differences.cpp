#include <bits/stdc++.h>
using namespace std;
int find_sum(vector<int> &a)
{
    int total_sum = 0;
    for (int i = 1; i < a.size(); i++)
    {
        total_sum += abs(a[i] - a[i - 1]);
    }
    return total_sum;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int max_sum = find_sum(a);

        for (int i = 0; i < n; ++i)
        {
            int val = a[i];

            a[i] = 1;
            int sum_with_1 = find_sum(a);
            max_sum = max(max_sum, sum_with_1);

            a[i] = k;
            int sum_with_k = find_sum(a);
            max_sum = max(max_sum, sum_with_k);

            a[i] = val;
        }

        cout << max_sum << "\n";
    }

    return 0;
}
