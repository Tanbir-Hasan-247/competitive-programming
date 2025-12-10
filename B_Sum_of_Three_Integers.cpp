#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - (x + y);
            if (z <= k && z >= 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}