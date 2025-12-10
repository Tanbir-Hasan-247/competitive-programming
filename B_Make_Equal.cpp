#include<bits/stdc++.h>
using namespace std;
void make_equal()
{
        int n;
        cin>>n;
        long long int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        
        long long int x=sum/n;
        if(sum%n==0&&a[0]>=x)
        {
            for(int i=0;i<n-1;i++)
            {
                    if(x>a[i])
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                    else if(x==a[i])
                    {
                        continue;
                    }
                    else
                    {
                        int j=i+1;
                    
                            a[j]+=(a[i]-x);
                            a[i]=x;
                        
                    }
                
            }
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       make_equal(); 
    }
}