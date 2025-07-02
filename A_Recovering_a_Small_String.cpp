#include<bits/stdc++.h>
using namespace std;
string smalleststring(int n)
{
    int a=1,b=1;
    int c=n-a-b;
    string word="";
    if(c<=26)
    {
        word="a";
        word+="a";
        word+=('a'+(c-1));
        return word;
    }
    else 
    {
        b+=(c-26);
        if(c-26<=25)
        {
            word="a";
            word+=('a'+(b-1));
            word+="z";
            return word;
        }
        else
        {
            a+=(b-26);
            word=('a'+(a-1));
            word+="z";
            word+="z";
            return word;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s=smalleststring(n);
        cout<<s<<endl;
    }
}