#include <bits/stdc++.h>
using namespace std;
const int N = 200000;
vector<int> a(N, 0);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for (int i = 1; i <= N; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= N; i++)
    {
        a[i] = a[i - 1] + (a[i] >= k ? 1 : 0);
    }
    while (q--)
    {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << '\n';
    }
    return 0;
}