#include <bits/stdc++.h>
using namespace std;
long long W[101], C[100001], n, w;
long long f[101][100001];
long long g[101][100001];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("knapsack2.inp","r",stdin);
    freopen("knapsack2.out","w",stdout);
    memset(f,0,sizeof(f));
    cin>>n>>w;
    for (int i=1; i<=n; i++) cin>>W[i];
    for (int i=1; i<=n; i++) cin>>C[i];
    for (int i=0; i<=n; i++) g[i][0]=1;
    for (int j=0; j<=w; j++) g[0][j]=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=w; j++)
        {
            f[i][j]=f[i-1][j];
            g[i][j]=g[i-1][j];
            if (W[i]<=j)
            {
                if (f[i][j] < C[i]+f[i-1][j-W[i]])
                {
                    f[i][j]=C[i]+f[i-1][j-W[i]];
                    g[i][j]=g[i-1][j-W[i]];
                }
                else if (f[i][j] == C[i]+f[i-1][j-W[i]])
                {
                    g[i][j]=g[i][j]+g[i-1][j-W[i]];
                }
            }
        }
    }
    cout<<f[n][w]<<'\n'<<g[n][w];
}
