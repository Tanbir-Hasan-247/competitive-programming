#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    long long cnt = 0;
    map<long long, int> mp;
    mp[0] = 1;
    for (int X : a)
    {
        sum += X;
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt << '\n';
}