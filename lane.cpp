#include <bits/stdc++.h>
using namespace std;
int n, k, s=0;
int a[5001], b[5001];
int f[5001][5001];
int g[5001][5001];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("lane.inp","r",stdin);
    //freopen("lane.out","w",stdout);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
       cin>>a[i];
    }
    for (int i=1; i<=n; i++)
    {
       cin>>b[i];
    }
    f[1][1]=a[1];
    g[1][1]=b[1];
    for (int i=2; i<=n; i++)
    {
        for (int t=1; t<=min(i, k); t++)
        {
            if(t==i)
            {
                f[i][t]=a[i]+f[i-1][t-1];
                g[i][t]=b[i]+g[i-1][t-1];
            }
            else
            {
                f[i][t]=max(a[i]+f[i-1][t-1], max(f[i-1][t], g[i-1][t]));
                g[i][t]=max(b[i]+g[i-1][t-1], max(g[i-1][t], f[i-1][t]));
            }
        }
    }
    cout<<max(f[n][k], g[n][k]);
}
