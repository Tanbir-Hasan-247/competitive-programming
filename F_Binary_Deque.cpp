#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == s)
        {
            cout << 0 << "\n";
        }
        else if (sum < s)
        {
            cout << -1 << "\n";
        }
        else
        {
            int ans=0,k;
            for (int i = 0; i < n; i++)
            {
                ans+=a[i];
                if (ans==s)
                {
                    k=i;
                    break;
                }
                
            }
        }
    }
}