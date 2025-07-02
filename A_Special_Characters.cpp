#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n;
        cin >> n;
        if (n % 2 != 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n / 2; i++)
            {

                cout << str[i] << str[i];
            }
            cout << "\n";
        }
    }

    return 0;
}