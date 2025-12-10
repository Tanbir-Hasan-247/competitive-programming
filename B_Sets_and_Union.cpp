#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> v[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int N;
            cin >> N;
            for (int j = 0; j < N; j++)
            {
                int x;
                cin >> x;
                v[i].insert(x);
                s.insert(x);
            }
        }
        int cnt = s.size();
        int ans = 0;
        for (int i = 1; i <= 50; i++)
        {
            s.clear();
            for (int j = 0; j < n; j++)
            {
                if (v[j].count(i) == 0)
                    s.insert(v[j].begin(), v[j].end());
            }
            if (ans < s.size() && cnt > s.size())
            {
                ans = s.size();
            }
        }
        cout << ans << "\n";
    }
}