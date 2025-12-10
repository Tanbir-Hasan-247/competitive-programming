#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        vector<int> v;
        bool r = false;
        string s[n];
        for (int i = 0; i < n; i++)
        {

            cin >> s[i];
            for (int j = 0; j < n; j++)
            {

                if (s[i][j] == '1')
                    c++;
            }
            if (c != 0)
            {
                v.push_back(c);
                c = 0;
            }
        }
        v.push_back(c);
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                r = true;
                break;
            }
        }
        if (r)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }

    return 0;
}