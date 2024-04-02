#include <bits/stdc++.h>
using namespace std;
long long f[999999], n, d=0, a, i;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("efib.inp","r",stdin);
    freopen("efib.out","w",stdout);
    cin>>n;
    f[1]=1;
    f[2]=1;
    i=1;
    while (f[i]<=n)
    {
        i++;
        f[i]=f[i-1]+f[i-2];
    }
    a=i-1;
    while (n>0)
    {
        if (f[a]<=n)
        {
            n=n-f[a];
            d++;
        }
        a--;
    }
    cout<<d;
    return 0;
}
