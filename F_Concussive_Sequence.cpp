#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool x = true;
        // for (int i = 1; i < n - 1; i++)
        // {
        //     if (!(a[i - 1] < a[i] && a[i] > a[i + 1]) || !(a[i - 1] > a[i] && a[i] < a[i + 1]))
        //     {
        //         x = false;
        //         break;
        //     }
        // }

        for (int i = 1; i < n - 1; i++)
        {
            if (!(a[i - 1] < a[i] && a[i] > a[i + 1]) && !(a[i - 1] > a[i] && a[i] < a[i + 1]))
            {
                if (a[i - 1] < a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
                else if (a[i - 1] > a[i + 1])
                {
                    swap(a[i], a[i - 1]);
                }
                else
                {
                    cout << "-1\n";
                    x = false;
                    break;
                }
            }
            // else if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1]))
            //     continue;
            // else // if((a[i - 1] == a[i] && a[i] == a[i + 1]))
            // {
            // }
        }

        if (x)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
