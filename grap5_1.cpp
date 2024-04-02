#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define file "grap5."
using namespace std;
int n,m,u,v;
bool tham[1001]={};
vector<int>p[1001];

void init()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if(fopen("t.inp","r"))
    {
        freopen("t.inp","r",stdin);
        freopen("t.out","w",stdout);
    }
    else
    {
        freopen(file"inp","r",stdin);
        freopen(file"out","w",stdout);
    }

}

void dfs(int i)
{
    tham[i]=1;
    for(int j=0;j<p[i].size();j++)
    {
        if(!tham[p[i][j]])dfs(p[i][j]);
    }
}

void xuly()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        p[u].push_back(v);
        p[v].push_back(u);
    }
    dfs(1);
    bool kt=0;
    for(int i=1;i<=n;i++)if(!tham[i]){kt=1;cout<<i<<'\n';}
    if(!kt)cout<<kt;
}

main()
{
    init();
    xuly();
}
