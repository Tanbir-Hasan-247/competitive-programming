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
        vector<int> A(n), a(n), P(n), p(n);
        int sum_A = 0, sum_a = 0, sum_P = 0, sum_p = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum_A += A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> P[i];
            sum_P += P[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            sum_p += p[i];
        }
        if (sum_A > sum_P && sum_a > sum_p)
        {
            cout << "A\n";
        }
        else if (sum_A < sum_P && sum_a < sum_p)
        {
            cout << "P\n";
        }
        else
            cout << "DRAW\n";
    }
}