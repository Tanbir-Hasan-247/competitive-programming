#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> a(m), b(n);
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        q.push(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        q.push(b[i]);
    }

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
