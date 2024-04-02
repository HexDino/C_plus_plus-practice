#include <bits/stdc++.h>
using namespace std;
long long a[10001];
int n,b,k,i,s=0,r;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
}
int main ()
{
    cin>>n>>k>>b;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (i=1;i<=k;i++)
    {
        r=b%n;
        if (r==0) s=s+a[n];
        else s=s+a[r];
        b++;
    }
    cout<<s;
    return 0;
}
