#include <bits/stdc++.h>
using namespace std;
int bit(int x, string s)
{
}
int main()
{
    int x = 0, i;
    int n;

    cin >> n;
    string s1 = "++X", s2 = "--X", s3 = "X++", s4 = "X--";
    while (n--)
    {
        string s;
        cin >> s;
        if (s == s1 || s == s3)
        {
            ++x;
        }
        else if (s == s2 || s == s4)
        {
            x--;
        }
    }
    cout << x << "\n";
}