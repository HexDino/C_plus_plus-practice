#include <bits/stdc++.h>
using namespace std;
long long n,i,j,vtd,vtc,ma=0,sum=0;
long long a[999999],f[999999],g[999999];
void mo()
{
    freopen("seqmax.inp","r",stdin);
    freopen("seqmax.out","w",stdout);
}
int main()
{
    //mo();
    cin>>n;
    for (i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(int i = 1 ; i <= n ;i++)
        f[i]=1;
        f[1]=a[1];
    for (i=2;i<=n;i++)
    {
        if(a[i]+f[i-1]>0) {f[i] = f[i-1]+a[i]; g[i] = g[i-1]+1;} else f[i] = a[i];
    }
    for(int i = 1 ;i <= n ; i++)
        cout << f[i] << " " << g[i] << '\n';
    return 0;
}
