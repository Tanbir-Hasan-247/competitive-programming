#include <iostream>
#include <string>
using namespace std;

int minOperations(string x, string s)
{
    int n = x.length();
    int m = s.length();
    int operations = 0;
    int y = 6;
    while (y--)
    {
        if (x.find(s) != string::npos)
        {
            return operations;
        }
        x += x;
        operations++;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int result = minOperations(x, s);
        cout << result << "\n";
    }

    return 0;
}