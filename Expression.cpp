#include<iostream>
using namespace std;
int max(int a,int b)
{
    return a<b?b:a;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result=0;
    result=max(result,a+b*c);
    result=max(result,a*b+c);
    result=max(result,a*(b+c));
    result=max(result,(a+b)*c);
    result=max(result,a*b*c);
    result=max(result,a+b+c);
    cout<<result<<endl;
    return 0;
}