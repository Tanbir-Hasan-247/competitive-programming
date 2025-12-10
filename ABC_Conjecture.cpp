#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "Yes\n";
            continue;
        }
        else if (a != b && n == 3)
        {
            cout << "No\n";
            continue;
        }

        int i = -1, j = -1, k = -1;

        for (int x = 0; x < n; x++)
        {
            if (a[x] == 'a')
                i = x;
            else if (a[x] == 'b' && i != -1 && j == -1)
                j = x;
            else if (a[x] == 'c' && i != -1 && j != -1)
            {
                k = x;
                break;
            }
        }

        if (i == -1 || j == -1 || k == -1)
        {
            cout << "No\n";
            continue;
        }

        swap(a[i], a[k]);

        if (a == b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
