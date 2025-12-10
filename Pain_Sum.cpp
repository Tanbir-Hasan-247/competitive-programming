#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t;
    cin >> n >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long sg = (a - 1) / 3 + 1;
        long long eg = (b - 1) / 3 + 1;
        if (sg == eg)
        {
            cout << (b - a + 1) * sg << endl;
            continue;
        }
        long long sum = 0;
        long long fe = sg * 3;
        sum = sum + (fe - a + 1) * sg;
        long long lg = (eg - 1) * 3 + 1;
        sum = sum + (b - lg + 1) * eg;

        if (eg > sg + 1)
        {
            long long first = sg + 1;
            long long last = eg - 1;
            long long cnt = last - first + 1;
            sum = sum + 3 * cnt * (first + last) / 2;
        }
        cout << sum << endl;
    }
    return 0;
}