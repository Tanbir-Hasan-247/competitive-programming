#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll sum = 0, temp = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        if (sum % n == 0)
        {
            sum /= n;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == sum)
                {
                    cout << "Yes" << endl;
                    break;
                }
                else if (v[i] > sum)
                {
                    temp = v[i] - sum;
                    if (temp % 2 == 0)
                    {
                        v[i] -= temp;
                        v[i + 1] += temp;
                        temp = 0;
                    }
                    else
                    {
                        cout << "No" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "No" << endl;
                    break;
                }
            }
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
