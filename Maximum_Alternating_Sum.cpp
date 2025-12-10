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
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=j;i<n/2;i++)
        {
            sum+=(-1)*v[i];
            j=i;
            
        }
        for(int i=j+1;i<n;i++)
        {
            sum+=v[i];
            
            
        }
        
        cout<<sum<<endl;
    }

    return 0;
}
