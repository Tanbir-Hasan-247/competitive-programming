#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int y = 1;
        int mx = 0;
        int opti_y = 1;
        
        while(y < x)
        {
            int gcd = __gcd(x, y) + y;
            if(gcd > mx)
            {
                mx = gcd;
                opti_y = y;
            }
            y++;
        }
        cout << opti_y << "\n";
    }
    return 0;
}
