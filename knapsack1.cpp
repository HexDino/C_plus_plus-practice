#include <bits/stdc++.h>
using namespace std;
long long a[101], v[100001], n, w, d=0;
long long f[101][100001];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("knapsack1.inp","r",stdin);
    freopen("knapsack1.out","w",stdout);
    memset(f,0,sizeof(f));
    cin>>n>>w;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) cin>>v[i];
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=w; j++)
        {
            f[i][j]=f[i-1][j];
            if (a[i]<=j)
            {
                f[i][j]=max(f[i-1][j-a[i]]+v[i],f[i-1][j]);
            }
        }
    }
    cout<<f[n][w];
}
