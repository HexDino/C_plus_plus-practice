#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define file "grap3."
using namespace std;
int vi[]={-1,0,0,1};
int vj[]={0,-1,1,0};

int n,m,bd=0;
char a[1001][1001];
bool tham[1001][1001]={};
int ans_c=0,ans_f=0;
int c=0,f=0;

void init()
{
    freopen(file"inp","r",stdin);
    freopen(file"out","w",stdout);
}

void dfs(int i,int j)
{
    tham[i][j]=1;
    if(a[i][j]=='c')c++;
    if(a[i][j]=='f')f++;
    for(int f=0;f<4;f++)
    {
        int x=i+vi[f],y=j+vj[f];
        if( x>=1 && x<=m && y>=1 && y<=n &&!tham[x][y] && a[x][y]!='#' )dfs(x,y);
    }
}
void xuly()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
             cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!tham[i][j] && a[i][j]!='#')
            {
                dfs(i,j);
                if(c>f)ans_c+=c;
                else ans_f+=f;
                c=0;f=0;
            }
        }
    }
    cout<<ans_f<<' '<<ans_c;
}

main()
{
    init();
    xuly();
}

