#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int m, n, io, jo, ii, jj, x=0;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("cross2.inp","r",stdin);
    freopen("cross2.out","w",stdout);
    cin>>m>>n>>io>>jo>>ii>>jj;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=1; i<=m; ++i)
    {
        for (int j=1; j<=n; ++j)
        {
            if((i-io==j-jo)||(i-io==jo-j))
            {
                x=x+a[i][j];
                a[i][j]=0;
            }
        }
    }
    for (int i=1; i<=m; ++i)
    {
        for (int j=1; j<=n; ++j)
        {
            if((i-ii==j-jj)||(i-ii==jj-j)) x=x+a[i][j];
        }
    }
    cout<<x;
}
