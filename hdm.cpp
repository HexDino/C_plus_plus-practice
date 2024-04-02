#include <bits/stdc++.h>
using namespace std;
long long n,i,d=0,ma;
long long f[999999];
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("hdm.inp","r",stdin);
    freopen("hdm.out","w",stdout);
}
int main ()
{
    mo();
    memset(f,0,sizeof(f));
    cin>>n;
    f[1]=0;
    f[2]=1;
    f[3]+=max(f[1],max(2*f[1],f[2]));
    for (i=3;i<=n;i++)
    {
        if(f[i]!=n)
        {
            f[i]=max(2*f[i-2],max(f[i-1],f[i-2]));
            d++;
        }
    }
    cout<<d;
    return 0;
}
