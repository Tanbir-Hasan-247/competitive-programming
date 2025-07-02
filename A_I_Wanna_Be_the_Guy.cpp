#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;

    vector<bool> levelsPassed(n + 1, false); 
    int p;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int level;
        cin >> level;
        levelsPassed[level] = true; 
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int level;
        cin >> level;
        levelsPassed[level] = true; 
    }

    bool allLevelsPassed = true;
    for (int i = 1; i <= n; ++i)
    {
        if (!levelsPassed[i])
        { 
            allLevelsPassed = false;
            break;
        }
    }

    if (allLevelsPassed)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
