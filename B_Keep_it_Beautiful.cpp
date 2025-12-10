#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<ll> x;
        vector<char> s;
        bool check = false;
        for (int i = 0; i < q; i++)
        {
            ll a;
            cin >> a;
            if (x.empty())
            {
                x.push_back(a);
                s.push_back('1');
            }
            else
            {
                if (!check)
                {
                    if (a >= x.back())
                    {
                        x.push_back(a);
                        s.push_back('1');
                    }
                    else
                    {
                        if (x[0] >= a)
                        {
                            x.push_back(a);
                            check = true;
                            s.push_back('1');
                        }
                        else
                        {
                            s.push_back('0');
                        }
                    }
                }
                else if (check)
                {
                    if (a >= x.back() && a <= x[0])
                    {
                        x.push_back(a);
                        s.push_back('1');
                    }
                    else
                    {
                        s.push_back('0');
                    }
                }
                else
                {
                    s.push_back('0');
                }
            }
        }
        for (auto c : s)
        {
            cout << c;
        }
        cout << "\n";
    }
}
