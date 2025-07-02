#include <bits/stdc++.h>
using namespace std;
bool isEighthPower(long long n)
{
    long long root = 1;
    while (root * root * root * root * root * root * root * root < n)
    {
        root++;
    }
    return root * root * root * root * root * root * root * root <= n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        long long Pro_A = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            Pro_A *= A[i];
        }
        if (isEighthPower(Pro_A))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}