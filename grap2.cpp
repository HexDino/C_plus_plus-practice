#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define file "grap2."
using namespace std;
int vs[]={-1,0,1};
int n,m,bd=0;
char a[501][501];
bool tham[501][501]={};

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

void dfs(int i,int j)
{
    tham[i][j]=1;
    for(int f=0;f<3;f++)
    {
        for(int f1=0;f1<3;f1++)
        {
            int x=i+vs[f],y=j+vs[f1];
            if( !tham[x][y] && a[x][y]=='W')dfs(x,y);
        }
    }
}
void xuly()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)cin>>a[i][j];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(!tham[i][j] && a[i][j]=='W'){bd++;dfs(i,j);}
        }
    }
    cout<<bd;
}

main()
{
    init();
    xuly();
}
