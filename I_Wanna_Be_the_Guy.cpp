#include<iostream>
using namespace std;
int check(int p,int q,int a[],int b[],int n)
{
    for (int i = 0; i < p; i++) 
    {

        if (a[i] == n) 
        {
            return 1;
        }
    }

    for(int j=0;j<q;j++) 
    {
        if(b[j]==n) 
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,p,q;
    cin>>n;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
    }
    int x=check(p,q,a,b,n);
    x?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
    
}