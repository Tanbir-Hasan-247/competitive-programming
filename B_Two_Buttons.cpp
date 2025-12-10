/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 04:03:22 10/12/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

int n, m;
int bestAns = INT_MAX;
vector<int> vis(20005, -1);

void dfs(int u, int steps)
{
    if (steps >= bestAns) return;
    if (u <= 0 || u > 20000) return;

    if (u == m) {
        bestAns = min(bestAns, steps);
        return;
    }

    if (vis[u] != -1 && vis[u] <= steps) return;
    vis[u] = steps;

    dfs(u * 2, steps + 1);
    dfs(u - 1, steps + 1);
}

void solve()
{
    cin >> n >> m;
    bestAns = INT_MAX;
    fill(vis.begin(), vis.end(), -1);

    dfs(n, 0);

    cout << bestAns << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
