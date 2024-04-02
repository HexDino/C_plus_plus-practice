#include <bits/stdc++.h>
using namespace std;
long long n, k, x;
long long a[100001];
long long s[100001];
bool ktr(long long x, int m)
{
    int dau, cuoi, giua, ii=0;
    dau=1; cuoi=n;
    while (dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if (a[giua]<m) {ii=giua; dau=giua+1;}
        else cuoi=giua-1;
    }
    if (s[n]-s[ii]-1LL*(n-ii)*m>=x) return true;
    return false;
}
int giai(long long x)
{
    int ans=0, l, r, hh;
    l=1; r=a[n];
    while (l<=r)
    {
        hh=(l+r)/2;
        if (ktr(x, hh))
        {
            ans=hh;
            l=hh+1;
        }
        else r=hh-1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("saw.inp","r",stdin);
    freopen("saw.out","w",stdout);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for (int i=1; i<=n; i++)
    {
        s[i]=a[i]+s[i-1];
    }
    for (int i=1; i<=k; i++)
    {
        cin>>x;
        cout<<giai(x)<<' ';
    }
}
