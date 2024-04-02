#include <bits/stdc++.h>
using namespace std;
long long a[1000][1000];
long long f[100][100][100];
long long n,m,w,i,j,k;
void mo()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("fbird.inp","r",stdin);
    freopen("fbird.out","w",stdout);
}
int main ()
{
    mo();
    cin>>n>>m>>w;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }

    f[0][0][0]=0;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            for (k=1;k<=w;k++)
            {
                if (k>=a[i][j] && (a[i][j]>a[i-1][j-1] || a[i][j]>a[i][j-1] || a[i][j]>a[i+1][j-1]))
                {
                    f[i][j][k]= max(f[i-1][j-1][k-a[i][j]], max(f[i][j-1][k-a[i][j]], f[i+1][j-1][k-a[i][j]] ))+a[i][j];
                }
                else f[i][j][k]=f[i][j-1][k];
            }
        }
    }
    cout<<w;

}
