#include<bits/stdc++.h>
using namespace std;
long long n, a[200005], ans = 0, f, b[200001], d=0;
pair<long long,long long> c[200001];
#define fi first
#define se second
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("chiahet7.inp","r",stdin);
    freopen("chiahet7.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        a[i]=abs(a[i]);
    }
    b[1] = a[1];
    for (int i = 2 ; i <= n ; i++)
    {
        b[i] = b[i-1] + a[i];
    }
    for (int i = 1 ; i <= n ; i++)
    {
        c[i].fi = (b[i] % 7);
        c[i].fi = (c[i].fi+7) % 7;
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
