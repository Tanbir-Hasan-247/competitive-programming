#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int d=(4*n)-2;
        d-=2;
        if(d>=k)
        {
            cout<<(k+1)/2<<endl;
        }
        else{
            cout<<(d/2)+(k-d)<<endl;
        }
    }
    
}