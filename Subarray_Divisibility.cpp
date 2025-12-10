#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    long long cnt = 0;
    map<int, int> mp;
    mp[0] = 1;
    for (int value : a)
    {
        sum += value;
        int mod = ((sum % n) + n) % n;
        cnt += mp[mod];
        mp[mod]++;
    }
    cout << cnt << '\n';
}
