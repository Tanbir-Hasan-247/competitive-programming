#include <bits/stdc++.h>
using namespace std;

int find(int n)
{
    if (n == 0)
        return 32;
    int cnt = 0;
    while ((n & 1) == 0)
    {
        n >>= 1;
        cnt++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (1 << find(x ^ y)) << "\n";
    }
    return 0;
}
