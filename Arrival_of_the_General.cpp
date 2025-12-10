#include<iostream>
using namespace std;
 
void findminmax(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(min>=a[i])
        {
            min=a[i];
            x=i;
        }
        if(max<a[i])
        {
            max=a[i];
            y=i;
        }
    }
    int m;
    
    if(x<y)
    {
        m=y+(n-1-x)-1;
    }
    else
    {
        m=y+(n-1-x);
    }
    cout<<m;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    findminmax(a,n);
}