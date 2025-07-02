#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, largest, second;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] < a[1])
        {
            largest = 1;
            second = 0;
        }
        else
        {
            largest = 0;
            second = 1;
        }
        for (int i = 2; i < n; i++)
        {

            if (a[i] > a[largest])
            {
                second = largest;
                largest = i;
            }
            else if (a[i] > a[second] && a[i] != a[largest])
            {
                second = i;
            }
        }
        if (largest < second)
        {
            cout << largest << " " << second << endl;
        }
        else
        {
            cout << second << " " << largest << endl;
        }
    }
}