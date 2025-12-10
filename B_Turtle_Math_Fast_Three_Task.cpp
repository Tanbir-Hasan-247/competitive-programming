#include <iostream>
#include <vector>
using namespace std;

int minMoves(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0, rem1 = 0, rem2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] % 3 == 1)
            rem1++;
        else if (arr[i] % 3 == 2)
            rem2++;
    }

    int ans = 0;
    if (sum % 3 == 1)
    {
        if (rem1 >= 1)
            ans = 1;
        else if (rem2 >= 2)
            ans = 2;
    }
    else if (sum % 3 == 2)
    {
        if (rem2 >= 1)
            ans = 1;
        else if (rem1 >= 2)
            ans = 1;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << minMoves(arr) << "\n";
    }
    return 0;
}
