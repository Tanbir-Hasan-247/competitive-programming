#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>a(n);
        int sum = 0;
        for (int i=0; i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < k; i++){
            if(a[i] == 1){
                sum -= 1;
                sum += 6;
            }
            else if(a[i] == 2){
                sum -= 2;
                sum += 5;
            }
            else if(a[i] == 3){
                sum -= 3;
                sum += 4;
            }
        }
        cout<<sum<<"\n";
    }
}
