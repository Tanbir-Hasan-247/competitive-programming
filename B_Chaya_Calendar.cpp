#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=a[0];
        for(int i=1;i<n;i++)
        {
            x*=i;
            if(x==a[i])
            {
                x+=1;tanbirhasan2117@gmail.com
            }
        }
        cout<<x<<endl;
    }
    
}