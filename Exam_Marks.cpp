#include<bits/stdc++.h>
using namespace std;

void check(int n,int m,vector<int>& a)
{
    sort(a.begin(),a.end(),greater<int>());
    int x = 1000-m;
    if(x==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        int y = a[i];
        for(int j=i+1;j<n;j++)
        {
            if(y<x)
            {
                y+=a[j];
            }
            if(x==y)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        check(n,m,a);
    }
    return 0;
}
