#include<iostream>
using namespace std;
int main()
{
    string num1,num2;
    cin>>num1>>num2;
    int n=num1.length();
    int result[n];
    for(int i=0;i<n;i++)
    {
        if(num1[i]==num2[i])
        {
            result[i]=0;
        }
        else 
        {
            result[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i];
    }
}