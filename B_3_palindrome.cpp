#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "bbaa";
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cout << s[j];
        j++;
        if (j == 4)
        {
            j = 0;
        }
    }
    cout << "\n";
}