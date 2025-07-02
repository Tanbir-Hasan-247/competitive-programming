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

    for (int v : a)
    {
        int ans = 20;
        for (int i = 0; i <= 15; i++)
        {
            for (int j = 0; j <= 15; j++)
            {
                if (((v + i) << j) % 32768 == 0)
                {
                    ans = min(ans, i + j);
                }
            }
        }
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}
