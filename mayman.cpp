#include<bits/stdc++.h>
using namespace std;
int n, p, ma = 0, l=0, r=0,f[1000001];
pair<int,int> a[1000001];
#define fi first
#define se second
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("mayman.inp","r",stdin);
    freopen("mayman.out","w",stdout);
    cin >> n >> p;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a+1,a+n+1);
    f[1] = a[1].se;
    for (int i = 2 ; i <= n ; i++)
    {
        f[i] = min(f[i-1], a[i].se);
    }
    for (int j = 2 ; j <= n ; j++)
    {
        if (a[j].fi - a[1].fi < p) continue;
        int left = 1, right = j - 1, mid, i0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (a[j].fi - a[mid].fi >= p) {i0 = mid;left = mid + 1;}
            else right = mid - 1;
        }
        int e = a[j].se;
        if (e - f[i0] >= r - l) {l = f[i0];r = e;}
    }
    if (l == 0) cout << 0;else cout << l << ' ' << r;
}
