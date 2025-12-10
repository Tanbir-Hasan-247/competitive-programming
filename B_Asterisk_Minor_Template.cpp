#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
        cin >> a >> b;

        if (a[0] == b[0])
        {
            cout << "YES" << "\n";
            cout << a[0] << "*" << "\n";
            return;
        }

        if (a[a.length() - 1] == b[b.length() - 1])
        {
            cout << "YES" << "\n";
            cout << "*" << a[a.length() - 1] << "\n";
            return;
        }

        bool ok = false;
        for (int i = 0; i < b.length() - 1; i++)
        {
            string substr = b.substr(i, 2);
            if (a.find(substr) != string::npos)
            {
                cout << "YES" << "\n";
                cout << "*" << substr << "*" << "\n";
                ok = true;
                break;
            }
        }

        if (!ok)
        {
            cout << "NO" << "\n";
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; 
    while (t--)
    {
        solve();
    }

    return 0;
}