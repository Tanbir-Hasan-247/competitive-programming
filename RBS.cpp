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
        string s;
        cin>>s;
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                s1.push(s[i]);
            }
            else
            {
                s2.push(s[i]);
            }
        }
        s1.size()==s2.size()?cout<<"Possible"<<endl:cout<<"Impossible"<<endl;
    }
}