#include <bits/stdc++.h>
using namespace std;

bool isBinary(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

bool isProductOfBinaries(int n)
{
    if (n == 1)
        return true;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (isBinary(i) && isProductOfBinaries(n / i))
                return true;
        }
    }
    return isBinary(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isProductOfBinaries(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
