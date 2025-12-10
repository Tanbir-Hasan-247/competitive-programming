#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;

        for (int i = 0; i < n - 2; i++)
        {
            int x = v[i];
            v[i] -= x;
            v[i + 2] -= x;
            v[i + 1] -= (x + x);
            if (v[i] < 0 || v[i + 1] < 0 || v[i + 1] < 0)
            {
                cnt++;
                break;
            }
        }
        int mn = *min_element(v.begin(), v.end());

        int mx = *max_element(v.begin(), v.end());

        // for(auto u:v) cout<<u;
        if (mn == 0 && mx == 0)
            cout << "YES" << endl;
        else if (cnt > 0)
            cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}