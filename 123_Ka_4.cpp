#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"Tanbir Hasan";

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << "\n";
    for (int i = 2; i <= n; i++)
    {
        cout << i;
        for (int j = 2; j < n; j++)
        {
            if (i != n)
                cout << " ";
            else
                cout << i;
        }
        cout << n << endl;
    }
}