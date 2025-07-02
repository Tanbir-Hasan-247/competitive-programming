#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_map<long long, int> mp;
    long long sum = 0;
    int cnt = 0;

    mp[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        if (mp.find(sum - x) != mp.end())
        {
            cnt += mp[sum - x];
        }

        mp[sum]++;
    }

    cout << cnt << "\n";

    return 0;
}
