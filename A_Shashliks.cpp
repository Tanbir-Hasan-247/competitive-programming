#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
                                     
using namespace __gnu_pbds;
using namespace std;
                                     
template<typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
tree_order_statistics_node_update>;
                                     
#define ll long long
#define endl "\n"
 
void solve()
{
    ll k , a , b , x , y ;
    cin >> k >> a >> b >> x >> y ;
    ll x1 = (k-a)/x+1 ;
    ll y1 = (k-b)/y +1;
    ll res =0;
    if(x1 > 0 && y1 > 0){
        
        if(x1 > y1){
           res = x1 ;
           ll rem = k- res*x ;
           if(rem  >= b){
              res += ((rem-b)/y) + 1 ;
           }
 
        //    cout << res << endl ;
        }
        else {
            res = y1 ;
            ll rem =k- res*y ;
           // cout << "rem" << rem << endl ;
            if(rem >= a){
                res += ((rem-a)/x)+1 ;
              //  cout << "entr" << endl ;
                //cout <<  ((rem-a)/x)+1 <<endl ;
            }
 
            // cout << res << endl ;
        }
        
    }
     cout <<res << endl ;
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