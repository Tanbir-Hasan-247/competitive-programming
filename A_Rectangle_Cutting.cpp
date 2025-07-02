#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
            cout << "Yes" << endl;
        else if (a % 2 == 1 && b % 2 == 1)
            cout << "No" << endl;
        else if (a % 2 == 0 && a == 2 * b)
            cout << "No" << endl;
        else if (b % 2 == 0 && b == 2 * a)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}