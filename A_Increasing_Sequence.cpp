#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b;
        int x = 1;

        for (int i = 0; i < n; i++)
        {
            while (x == a[i])
            {
                x++;
            }
            b.push_back(x++);
        }

        cout << b[n - 1] << "\n";
    }
    return 0;
}
