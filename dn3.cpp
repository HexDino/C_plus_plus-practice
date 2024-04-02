#include<bits/stdc++.h>
using namespace std;
long long n, a[200005], ans = 0, f, b[200001];
pair<long long,long long> c[200001];
#define fi first
#define se second
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("dn3.inp","r",stdin);
    freopen("dn3.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    b[1] = a[1];
    for (int i = 2 ; i <= n ; i++)
    {
        b[i] = b[i-1] + a[i];
    }
    for (int i = 1 ; i <= n ; i++)
    {
        c[i].fi = (b[i] % 3);
        c[i].fi = (c[i].fi+3) % 3;
        c[i].se = i;
    }
    sort(c+1,c+n+1);
    c[0].fi = 0;
    for (int i = 1 ; i <= n; i++)
    {
        if (c[i].fi != c[i-1].fi)
        {
            f = i;
        }
        if (c[i].fi != c[i+1].fi)
        {
             ans = max(ans, c[i].se - c[f].se);
        }
    }
    cout << ans;
}
/*int ans, i1=-1, i2=-1,s=0;
for (int j=1; j<=n; j++)
{
    s=(s+a[j])%3;
    s=(s+3)%3;
    if (s==0)  ans=j;
    if (s==1)
    {
        if (i1!=-1) ans=max(ans, j-i1);
        else i1=j;

    }
    if (s==2)
    {
        if (i2!=-1) ans=max(ans, j-i2);
        else i2=j;
    }
}
*/
