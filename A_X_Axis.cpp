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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int a[3] = {x1, x2, x3};
        sort(a, a + 3);

        int m = a[1];

        int ans = abs(x1 - m) + abs(x2 - m) + abs(x3 - m);
        cout << ans << "\n";
    }
    return 0;
}
