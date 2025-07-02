#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int i, n, k, mn = 1e9;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> V;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            int x = a[i] % k;
            V.push_back(x);
        }

        sort(V.begin(), V.end());
        mn = V[n - 1] - V[0];
        for (i = 0; i < n - 1; i++)
        {
            mn = min(V[i] + k - V[i + 1], mn);
        }
        cout << mn << "\n";
    }
}