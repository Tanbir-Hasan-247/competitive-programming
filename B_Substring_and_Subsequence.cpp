#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int x = 0;

        for (int i = 0; i < b.size(); ++i)
        {
            int y = 0;

            for (int j = 0; j < a.size(); ++j)
            {
                if (b[i + y] == a[j])
                    ++y;
            }

            x = max(x, y);
        }

        cout << a.size() + b.size() - x << "\n";
    }
    return 0;
}