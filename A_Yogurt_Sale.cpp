#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (2 * a < b)
        {
            cout << n * a << "\n";
        }
        else
        {
            if (n >= 2)
            {
                int x = 0;
                x += (n / 2) * b;
                if (n % 2 != 0)
                    x += a;
                cout << x << "\n";
            }
            else
            {
                cout << a << "\n";
            }
        }
    }
    return 0;
}
