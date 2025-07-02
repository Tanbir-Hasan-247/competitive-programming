#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        long long target = x - a[i].first;
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            long long sum = a[l].first + a[r].first;
            if (sum == target)
            {
                v.push_back(a[i].second);
                v.push_back(a[l].second);
                v.push_back(a[r].second);
                sort(v.begin(), v.end());
                for (int m : v)
                {
                    cout << m << " ";
                }
                cout << "\n";
                return 0;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
