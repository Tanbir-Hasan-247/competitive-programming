#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int x = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                x++;
            }
            else if (x > 0)
            {
                x--;
            }
        }
        cout << x << "\n";
    }
}