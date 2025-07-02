#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool vis[1001][1001];
ll dis[1001][1001];
vector<pair<int, int>> d = {{-1, 1}, {-1, -1}, {1, 1}, {1, -1}};
int n, m;
ll arr[1001][1001];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (arr[i][j] == 0)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                if(arr[ci][cj]==-2)
                {
                    vis[ci][cj] = false;
                }
                if (dis[ci][cj]==-1)
                    dis[ci][cj] = dis[a][b] + arr[ci][cj];
                else if(dis[ci][cj]>dis[a][b] + arr[ci][cj])
                dis[ci][cj] = dis[a][b] + arr[ci][cj];
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int si, sj, di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == -1)
                {
                    si = i;
                    sj = j;
                }
                else if (arr[i][j] == -2)
                {
                    di = i;
                    dj = j;
                    //arr[i][j]=2;
                }
            }
        }

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(si, sj);

        ll minTime = dis[di][dj];
        cout << "Case " << t << ": ";
        if (minTime == -1)
            cout << "Impossible" << "\n";
        else
            cout << minTime +2 << "\n";
    }

    return 0;
}
