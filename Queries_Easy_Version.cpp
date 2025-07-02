#include <bits/stdc++.h>
using namespace std;
priority_queue<long long int>q1;
priority_queue<long long int>q2;
void find(int a,vector<long long int>&v)
{
    
    if (a == 1)
        {
            long long int x;
            cin >> x;
            if(x%2==0)
            {
                q1.push(x);
            }
            else
            {
                q2.push(x);
            }
            
        }
        else if (a == 2)
        {
            if(!q1.empty())
            {
                cout<<q1.top()<<endl;
                q1.pop();
            }
            else
            {
                cout<<"empty"<<endl;
            }
        }
        else if (a == 3)
        {
            if(!q2.empty())
            {
                cout<<q2.top()<<endl;
                q2.pop();
            }
            else
            {
                cout<<"empty"<<endl;
            }
        }
}
int main()
{
    int q;
    cin >> q;
    vector<long long int> v;
    while (q--)
    {
        int a;
        cin >> a;
        find(a,v);
    }
}