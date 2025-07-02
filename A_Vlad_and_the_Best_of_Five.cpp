#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        a>b?cout<<"A"<<endl:cout<<"B"<<endl;
    }
    
}