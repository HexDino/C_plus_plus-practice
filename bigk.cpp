#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n, k, ma = 0, a[500001], mi[500001];
pair<long long,int> f[1000001];
#define fi first
#define se second
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bigk.inp","r",stdin);
    freopen("bigk.out","w",stdout);
    cin >> n >> k;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    f[1].fi = a[1];
    f[1].se = 1;
    for (int i = 2 ; i <= n ; i++)
    {
        f[i].fi = f[i-1].fi + a[i];
        f[i].se = i;
    }
    sort(f+1,f+n+1);
    mi[0] = 100000000;
    for (int i = 1 ; i <= n ; i++)
    {
        mi[i] = mi[i-1];
        mi[i] = min(mi[i], f[i].se);
    }
    for (int j = 1 ; j <= n ; j++)
    {

        int l = 1, r = j - 1, mid, ans = 0;
        while (l < r)
        {
            mid = (l+r)/2;
            if (f[j].fi - f[mid].fi >= k) {l = mid + 1;ans = mid;}else r = mid - 1;
        }
        ma = max(ma, f[j].se - mi[ans]);
        if (f[j].first >= k) ma = max(ma, f[j].second);
    }
    cout << ma;
}
