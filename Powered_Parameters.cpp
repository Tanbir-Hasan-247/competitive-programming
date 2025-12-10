#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            if(pow(v[i],j+1)<=v[j])
            x++;
        }
            
        }
        cout<<x<<endl;
        
    }

    return 0;
}
