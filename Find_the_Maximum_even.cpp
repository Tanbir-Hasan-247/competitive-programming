#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum=0 ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>sum&&a[i]%2==0)
        {
            sum=a[i];
        }
        
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % 2 == 0 && (a[i] + a[j]) > sum)
            {
                sum = a[i] + a[j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
