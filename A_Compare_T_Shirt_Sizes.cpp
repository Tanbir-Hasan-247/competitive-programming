#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int size1 = s1.size(), size2 = s2.size();
        if (s1 == s2)
        {
            cout << "=" << endl;
        }
        else
        {
            char ca = s1.back();
            char cb = s2.back();
            if (ca == cb)
            {
                if (ca == 'S')
                    cout << (size1 < size2 ? '>' : '<') << endl;
                else
                    cout << (size1 < size2 ? '<' : '>') << endl;
            }
            else
                cout << (ca < cb ? '>' : '<') << endl;
        }
    }
}
