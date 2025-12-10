#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
        int n;
        cin>>n;

        vector<ll>a(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sortAsc(a);

        ll ans=a[0];
        for(int i=1;i<n;i++)
        {
            ans=(a[i]+ans)/2;
        }

        cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
