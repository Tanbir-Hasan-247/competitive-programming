#include<iostream>
using namespace std;
void sortarray(int n,int a[])
{
    while(n-1!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        n--;
    }
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
    sortarray(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}