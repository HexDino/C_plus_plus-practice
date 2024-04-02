#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define file "regions."
using namespace std;
int vi[]={-1,0,0,1};
int vj[]={0,-1,1,0};
int m,n,k;
int x,y,z,t;
bool a[1001][1001]={};
bool tham[1001][1001]={};

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

bool ins(int i,int j)
{
    return(i>=1 && i<=m && j>=1 && j<=n);
}

void dfs(int i,int j)
{
    tham[i][j]=1;
    for(int g=0;g<4;g++)
    {
        int x=i+vi[g],y=j+vj[g];
        if(ins(x,y) && !a[i][j] && !tham[x][y])dfs(x,y);
    }
}

void xuly()
{
    cin>>m>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y>>z>>t;
        if(x==z)
        {
            for(int j=y;j<=t;j++)a[x][j]=1;
        }
        if(y==t)
        {
            for(int j=x;j<=z;j++)a[j][y]=1;
        }
    }
    int bd=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!tham[i][j] && !a[i][j]){bd++;dfs(i,j);}
        }
    }
    cout<<bd;
}

main()
{
    init();
    xuly();
}
