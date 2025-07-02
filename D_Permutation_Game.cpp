#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, pb, ps;
        ll k;
        cin >> n >> k >> pb >> ps;
        vector<int> p(n);
        vector<ll>a(n);

        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll sumb = 0, sums = 0;
        while(k--)
        {
            sumb += a[pb]; 
            sums += a[ps]; 
            pb=p[pb];
            ps=p[ps];
            
        }

        if (sumb == sums)
        {
            cout << "Draw\n";
        }
        else if (sumb > sums)
        {
            cout << "Bodya\n";
        }
        else
        {
            cout << "Sasha\n";
        }
    }
    return 0;
}
