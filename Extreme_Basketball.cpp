#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        while (a < (b+10))
        {
            a += 3;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}
