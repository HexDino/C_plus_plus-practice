#include<bits/stdc++.h>
using namespace std;
long long a[1000][1000],i,j,n;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("nztable.inp","r",stdin);
    freopen("nztable.out","w",stdout);
}
long long  xl(long long  p,long long  q)
{
    long long  ma=0;
    for(long long  u=1;u<n;u++)
    {
        if(p-u>0&&a[p-u][q]!=0) ma=max(ma,a[p-u][q]);
        if(q-u>0&&a[p][q-u]!=0) ma=max(ma,a[p][q-u]);
        if(q+u<=n&&a[p][q+u]!=0) ma=max(ma,a[p][q+u]);
        if(p+u>0&&a[p+u][q]!=0) ma=max(ma,a[p+u][q]);
        if(ma!=0) return ma;
    }
    return 0;
}
int main ()
{
    mo();
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]!=0) cout<<a[i][j]<<' ';
            else cout<<xl(i,j)<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
