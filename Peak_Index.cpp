#include <bits/stdc++.h>
using namespace std;

int count(vector<int>& v) 
{
    int n = v.size();
    int totalSum = 0;
    for (int num : v)
        totalSum += num;

    int leftSum = 0;
    int x = 0;

    for (int i = 1; i < n - 1; i++) 
    {
        leftSum += v[i - 1];
        if (leftSum == totalSum - leftSum - v[i])
            {
                x++;
            }
    }

    return x;
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int x = count(v);
        cout << x << endl;
    }

    return 0;
}
