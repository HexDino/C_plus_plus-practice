#include<bits/stdc++.h>
using namespace std;
int tham[301];
int  a[301][301];
int n,j;
void BF(int v)
{
    tham[v]=1;
    queue <int> q;
    q.push(v);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int u=1;u<=n;u++)
        {
            if(a[p][u]==1&&tham[u]==0)
            {
                tham[u]=1;
                q.push(u);
            }
        }
    }
}
int m,i,x,y;
int main ()
{
   freopen("grap5.inp","r",stdin);
   freopen("grap5.out","w",stdout);
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(int j=1;j<=m;j++)
    {
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    BF(1);
    int d=0;
    for(int i=1;i<=n;i++)
    {
        if(tham[i]==0)
      cout<<i<<endl;
      else d++;
    }
    if(d==n) cout<<0;
    return 0;
}
