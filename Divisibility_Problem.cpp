#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int moves=(a%b==0)?0:b-(a % b);
        cout<<moves<<endl;
    }
}