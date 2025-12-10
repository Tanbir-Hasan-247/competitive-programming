#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1 = "0000";
    string s2 = to_string(n);

    int i = 4,j=s2.size();
    while (j >= 0)
    {
        s1[i] = s2[j];
        i--;
        j--;
    }
    cout << s1 << "\n";

    return 0;
}