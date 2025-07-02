#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = a + c;
    if (n >= b)
        cout << "YES\n";
    else
        cout << "NO\n";
}