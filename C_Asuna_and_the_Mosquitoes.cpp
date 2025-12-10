#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     ll mx = 0, sum = 0;
//     ll odd = 0, even = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         mx = max(a[i], mx);
//         sum += a[i];
//         if (a[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }

//     if (even == 0 || odd == 0)
//     {
//         cout << mx << endl;
//         return;
//     }

//     cout << sum - (odd - 1) << endl;
// }

void solve()
{
    ll n ; 
    cin >>n ; 
    vector<ll >v(n) ;
    for(auto &u : v) cin >> u ;
    vector<ll>res ;
    ll odd = 0 , even  = 0 , sum = 0 ;
    for(auto u : v){
        if(u % 2){
            res.push_back(u) ;
            odd++ ;
        }
        else {
            sum += u ;
            even++ ;
        }
    }
 
    if(odd == n||even == n){
        cout << *max_element(v.begin(),v.end()) << endl;
        return ;
    }
    // if(even == n){
    //     if(v.size()){
    //         cout <<*v.begin() << endl;
    //         return ;
 
    //     } 
    //     else{
    //         cout <<"0" << endl ;
    //         return ;
    //     }
        
    // }
    
   
    int i = 0 ;
    int s = res.size() , cnt = 0 ;
    while(s > 1){
        sum += res[i] - 1 ;
        i++ ;
        s-- ;
    }
    
    cout << sum + res[res.size()-1] << endl ;
   
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
