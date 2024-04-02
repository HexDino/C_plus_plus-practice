#include <bits/stdc++.h>
using namespace std;
//==========================================================================================
long long w[999999],v[999999];
long long i,j,n,m;
long long f[10000][10000];
//==========================================================================================
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("packing.inp","r",stdin);
    freopen("packing.out","w",stdout);
}
//==========================================================================================
int main ()
{
    cin>>n>>m;
    for (i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
        f[i][0]=0;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if (j>w[i])
            {
                f[i][j]=max(f[i-1][j],f[i][j-w[i]]+v[i]);
            }
            else f[i][j]=f[i-1][j];
        }
    }
    cout<<f[n][m];
    return 0;
}
