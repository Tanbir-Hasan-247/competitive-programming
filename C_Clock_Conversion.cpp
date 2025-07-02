#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1 = s.substr(0, 2);
        int hour = stoi(s1);
        if (hour < 12)
        {
            string adj_hour;
            if (hour == 0)
            {
                adj_hour = "12";
                cout << adj_hour + s.substr(2) << " AM\n";
            }
            else
                cout << s << " AM\n";
        }
        else if (hour == 12)
        {
            cout << s << " PM\n";
        }

        else if (hour >= 12)
        {
            if (hour > 12)
            {
                hour -= 12;
            }
            string adj_hour;
            if (hour < 10)
            {
                adj_hour = "0" + to_string(hour);
            }
            else
            {
                adj_hour = to_string(hour);
            }
            cout << adj_hour + s.substr(2) << " PM\n";
        }
    }
}