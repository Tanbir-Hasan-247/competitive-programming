#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
int dis[1001][1001];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
char arr[1001][1001];

bool valid(int i,int j) 
{
    if (i<0||i>=n||j<0||j>=m)
        return false;
    if (arr[i][j]=='#')
        return false;
    return true;
}

void bfs(int si,int sj) 
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while (!q.empty()) 
    {
        pair<int,int>par=q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        
        for(int i=0;i<4;i++) 
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if (valid(ci,cj)&&!vis[ci][cj]) 
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main() 
{
    cin>>n>>m;
    
    for(int i=0; i < n; i++) 
    {
        for (int j=0;j<m;j++) 
        {
            cin>>arr[i][j];
        }
    }
    
    int si,sj,di,dj; // Positions of Rezia (R) and Exit (D)
    for (int i=0;i<n;i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            if (arr[i][j] == 'R') // Rezia's starting position
            {
                si = i;
                sj = j;
            } 
            else if (arr[i][j] == 'D') // Exit position
            {
                di = i;
                dj = j;
            }
        }
    }
    
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    
    // Backtrack to mark the path with 'X'
    int x = dis[di][dj]; // Distance to the destination
    int ci = di, cj = dj;
    while (x > 0) 
    {
        
        for (int i = 3; i >= 0; i--) 
        {
            int ni = ci + d[i].first;
            int nj = cj + d[i].second;
            if (valid(ni, nj) && dis[ni][nj] == x ) 
            {
                ci = ni;
                cj = nj;
                arr[ci][cj] = 'X';
                break;
            }
        }
        x--;
    }
    
    // Output the modified maze
    for(int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) 
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
