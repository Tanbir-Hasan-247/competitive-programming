#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        if (m < n)
        {
            cout << "No\n";
        }
        else
        {
            if (n & 1)
            {
                cout << "Yes\n";
                for (int i = 0; i < n - 1; i++)
                    a[i] = 1;
                a[n - 1] = m - n + 1;
                for (int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << "\n";
            }
            else
            {
                if ((m - n - 2) & 1)
                {
                    cout << "No\n";
                }
                else
                {
                    cout << "Yes\n";
                    for (int i = 0; i < n - 2; i++)
                        a[i] = 1;
                    a[n - 2] = (m - n + 2) / 2, a[n - 1] = (m - n + 2) / 2;
                    for (int i = 0; i < n; i++)
                        cout << a[i] << " ";
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}
