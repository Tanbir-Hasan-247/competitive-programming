#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int,string>>v;
        for(int i=0;i<n;i++)
        {
            int b;
            string s;
            cin>>b>>s;
            v.push_back({b,s});
        }
        for(int i=0;i<n;i++)
        {
            
            for(char x:v[i].second)
            {
                if(x=='D')
                {
                    a[i]+=1;
                    if(a[i]==10)
                    {
                        a[i]=0;
                    }
                }
                else if(x=='U')
                {
                    a[i]-=1;
                    if(a[i]==-1)
                    {
                        a[i]=9;
                    }
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}