#include <bits/stdc++.h>

using namespace std;
const int nmax = 50001;
vector <int> adj[nmax];
queue <int> Q;
int dd[nmax],d[nmax],a[nmax];
int n, m, s, k;

void doc()
{
    cin >> n >> m >> s;
    for (int i=1; i<=k; i++) cin >> a[i];
    sort(a+1,a+k+1);
    for (int i=1; i<=m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void BFS(int u)
{
    Q.push(u);
    dd[u] = 1;
    while (!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if (dd[v] == 0)
            {
                dd[v] = 1;
                Q.push(v);
                d[v]=d[u]+1;
            }
        }
    }
}

void ghi()
{
    for (int i=1; i<=n; i++) cout << d[i] << " ";
}
int main()
{
    freopen("dongco.INP","r",stdin);
    freopen("dongco.OUT","w",stdout);
    doc();
    BFS(s);
    ghi();
    return 0;
}
