#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        map<char, vector<int>> m;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]].push_back(i);
        }
        int cost = abs(s[0] - s[s.size() - 1]);
        int jump = 0;
        multiset<char> x;
        vector<char> c;
        if (s[0] == s[s.size() - 1])
        {
            for (char c : s)
            {
                if (c == s[0])
                    jump++;
            }
            c.push_back(s[0]);
        }
        else if (s[0] > s[s.size() - 1])
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[0] >= s[i] && s[s.size() - 1] <= s[i])
                {
                    jump++;
                    if (!x.count(s[i]) && s[i] != s[s.size() - 1])
                    {
                        x.insert(s[i]);
                        c.push_back(s[i]);
                    }
                }
            }
            c.push_back(s[s.size() - 1]);
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[0] <= s[i] && s[s.size() - 1] >= s[i])
                {
                    jump++;
                    if (!x.count(s[i]) && s[i] != s[s.size() - 1])
                    {
                        x.insert(s[i]);
                        c.push_back(s[i]);
                    }
                }
            }
            c.push_back(s[s.size() - 1]);
        }
        cout << cost << " " << jump << "\n";
        if (c.size() > 2 && (s[0] < s[s.size() - 1]))
        {
            sort(c.begin() + 1, c.end() - 1);
        }
        else if (c.size() > 2 && (s[0] > s[s.size() - 1]))
        {
            sort(c.begin() + 1, c.end() - 1, greater<int>());
        }
        vector<int> ans;
        for (auto ch : c)
        {
            for (auto now : m[ch])
            {
                ans.push_back(now);
            }
        }
        for (int x : ans)
        {
            cout << x + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
