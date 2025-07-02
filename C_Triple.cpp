#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int b=-1;
        for(int x:a)
        {
            if(m[x]>=3)
            {
                b=x;
                break;
            }
        }
        cout<<b<<"\n";
    }
}