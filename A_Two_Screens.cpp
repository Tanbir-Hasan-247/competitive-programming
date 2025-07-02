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
    string s,t;
    cin>>s>>t;
    string ss="";
    for(int i=0;i<min(s.size(),t.size());i++)
    {
        if(s[i]==t[i])
        {
            ss+=s[i];
        }
        else
        {
            break;
        }
    }

    int ans=0;
    if(ss.size()!=0)
    {
        ans+=(ss.size()+1);
        ans+=((s.size()-ss.size())+(t.size()-ss.size()));
    }
    else
    {
        ans+=(s.size()+t.size());
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
