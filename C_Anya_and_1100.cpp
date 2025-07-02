#include <bits/stdc++.h>
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    string s;
    int q;
    cin >> s >> q;

    int cnt = 0;
    for (int i = 0; i + 3 < s.size(); i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            cnt++;
        }
    }

    while (q--)
    {
        int i, v;
        cin >> i >> v;
        i--;

         for (int j = i - 3; j <= i; j++)
        {
            if (j >= 0 && j + 3 < s.size() && s.substr(j, 4) == "1100")
            {
                cnt--;
            }
        }

        s[i] = v + '0';

        for (int j = i - 3; j <= i; j++)
        {
            if (j >= 0 && j + 3 < s.size() && s.substr(j, 4) == "1100")
            {
                cnt++;
            }
        }

        if(cnt>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
