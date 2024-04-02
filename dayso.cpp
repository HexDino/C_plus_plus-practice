#include <bits/stdc++.h>
using namespace std;
long long n,k,i,s=0,t,d=0,j,ans=0,z;
long long a[999999];
long long f[999999];
void mo()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("dayso.inp","r",stdin);
    freopen("dayso.out","w",stdout);
}
int main ()
{
    //mo();
    cin>>n>>k;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>=0) d++;
        s=s+a[i];
    }
    if (d==n) cout<<s;
    else
    {
    for (i=0;i<=n;i++)
        {
        t=0;
        for (j=i+1;j<=k;j++)
            {
            if (t<a[j])
                {
                t=a[j];
                z=j;
                }
            else continue;
            }
        s=s+t;
        i=i+z;
        }
    cout<<s;
    }
}
