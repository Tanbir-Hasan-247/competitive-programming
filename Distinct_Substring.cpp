#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int sum = k * (k + 1) / 2;

        cout << ((sum <= (n - k + 1)) ? "YES" : "NO") << "\n";
    }
    return 0;
}
