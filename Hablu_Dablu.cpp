#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, h, sum = 0;
    cin >> n >> h;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //sum += a[i];
    }
    // if (sum > h)
    // {
    //     cout << "Dablu\n";
    // }
    // else if (h > sum)
    // {
    //     cout << "Hablu\n";
    // }
    // else
    // {
        sort(a, a + n, greater<long long int>());
        bool chack = true;
        int i = 0;
        while (true)
        {
            if (chack)
            {
                sum = 0;
                for (int j = 0; j < n; j++)
                {
                    if (a[j] != 0)
                    {
                        a[j] = a[j] - 1;
                        sum += a[j];
                    }
                }
                // sum -= n;
                chack = false;
                if (sum <= 0)
                {
                    cout << "Hablu\n";
                    break;
                }
            }
            else
            {
                h =h- a[i];
                i++;
                chack = true;
                if (h <= 0)
                {
                    cout<<h<<endl;
                    cout << "Dablu\n";
                    break;
                }
            }
        }
    //}
}