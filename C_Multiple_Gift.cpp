#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    int len = 0;
    while (x <= y)
    {
        x *= 2;
        len++;
    }

    cout << len << "\n";
    return 0;
}
