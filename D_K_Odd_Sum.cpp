#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n, k;
        cin >> n >> k;
        int odd = 1, even = 2;
        int i = 1;
        while (i <= k)
        {
            cout << i << " ";
            if (i == k)
                break;
            i++;
        }
        int j = i + 2;
        int curr = i + 1;
        for (; j <= n; j += 2)
            cout << j << " ";
        for (; curr <= n; curr += 2)
        {
            cout << curr << " ";
        }

        cout << "\n";
    }
}