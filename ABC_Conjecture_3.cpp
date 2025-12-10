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
        map<char,int>mp;
        for(char c:s)
        {
            mp[c]++;
        }
        int x=0;
        int mn=min(mp['a'],mp['b']);
        mn=min(mn,mp['c']);
        // while(mp['a']>0&&mp['b']>0&&mp['c']>0)
        // {
        //     if(mp['a']>=mp['c'])
        //     {
        //         mp['a']--;
        //         x++;
        //     }
        //     else
        //     {
        //         mp['c']--;
        //         x++;
        //     }

        // }
        cout<<mn<<endl;
    }
}