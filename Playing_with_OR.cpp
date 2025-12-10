#include <bits/stdc++.h>
using namespace std;

int count(int n, int k, vector<int> &a)
{
    int cnt = 0;
    for (int i = 0; i <= n - k; i++)
    {
        bool hasOdd = false;
        for (int j = 0; j < k; j++)
        {
            if (a[i + j] % 2 == 1)
            {
                hasOdd = true;
                break;
            }
        }
        if (hasOdd)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int result = count(n, k, a);
        cout << result << "\n";
    }
    return 0;
}
