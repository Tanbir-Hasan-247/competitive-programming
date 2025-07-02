#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='@')
            {
                x++;
            }
            else if(a[i]=='*'&&a[i+1]=='*')
            {
                break;
            }
            else
            {
                continue;
            }
        }
        cout<<x<<endl;
    }
    
}