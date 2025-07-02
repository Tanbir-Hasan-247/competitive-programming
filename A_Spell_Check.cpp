#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());

        if ((n == 5 && s == "Timru"))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
