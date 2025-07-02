#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<string> &words)
{
    int minDiff = INT_MAX;
    int n = words.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = 0;
            for (int k = 0; k < words[i].size(); k++)
            {
                diff += abs(words[i][k] - words[j][k]); 
            }
            minDiff = min(minDiff, diff);
        }
    }

    return minDiff;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }

        cout << minDifference(words) << endl;
    }

    return 0;
}
