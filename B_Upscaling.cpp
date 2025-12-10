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
        string a[2 * n][n];
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]="..";
            }
        }
        for (int i = 0; i < 2 * n; )
        {
            for(int j=0;j<n;j+=2)
            {
                a[i][j]="##";
            }
            if(i%2!=0)
            i+=3;
            else
            i++;
        }
        for (int i = 2; i < 2 * n; )
        {
            for(int j=1;j<n;j+=2)
            {
                a[i][j]="##";
            }
            if(i%2!=0)
            i+=3;
            else
            i++;
        }

        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
        
    }
    return 0;
}
