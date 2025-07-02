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
        if (b < a)
            cout << "Yes\n";
        else
        {
            int x = a;
            int rev_a = ((x % 10) * 10) + (x / 10);
            if (rev_a > b)
                cout << "Yes\n";
            else
            {
                x = b;
                int rev_b = ((x % 10) * 10) + (x / 10);
                if (rev_b < a)
                    cout << "Yes\n";
                else if (rev_a > rev_b)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }
    }
}
