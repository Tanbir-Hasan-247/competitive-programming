#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll sum1 = (1LL * n * (n + 1)) / 2;
    cout << sum1 - sum << "\n";

    return 0;
}