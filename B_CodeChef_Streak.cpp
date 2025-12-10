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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max_a = INT_MIN, max_b = INT_MIN;
        int streak_a = 0, streak_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                streak_a = 0;
            else
                streak_a++;
            if (b[i] == 0)
                streak_b = 0;
            else
                streak_b++;
            max_a = max(max_a, streak_a);
            max_b = max(max_b, streak_b);
        }
        if (max_a < max_b)
            cout << "Addy\n";
        else if (max_a > max_b)
            cout << "Om\n";
        else
            cout << "Draw\n";
    }
    return 0;
}
