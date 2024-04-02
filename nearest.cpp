#include <bits/stdc++.h>
using namespace std;
long long n,a[10001],i,j,mi=1e9,d=0;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("nearest.inp","r",stdin);
    freopen("nearest.out","w",stdout);
}
int main ()
{
    mo();
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for (i=1;i<n;i++)
    {
        if (mi>a[i+1]-a[i]) mi=a[i+1]-a[i];
    }
    for (i=1;i<n;i++)
    {
        if (mi==a[i+1]-a[i]) d++;
    }
    cout<<mi<<' '<<d;
}
