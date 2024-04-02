#include <bits/stdc++.h>
using namespace std;
int n , a[500010] , la[500010] , li[500010] , ITa[10000005] , ITi[1000005];
///-----------------------
void build(int id,int l,int r)
{
    if (l == r)
    {
        ITi[id] = a[l];
        ITa[id] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(id << 1 , l , mid);
    build(id << 1|1 , mid + 1 , r);
    ITi[id] = min(ITi[id << 1] , ITi[id << 1|1]);
    ITa[id] = max(ITa[id << 1] , ITa[id << 1|1]);
}
///-----------------------
int geti(int id,int l,int r, int i ,int j)
{
    if (r < i || j < l) return 1e9;
    if (i <= l && r <= j) return ITi[id];
    int mid = l + r >> 1;
    return min(geti(id << 1 , l , mid , i , j),
               geti(id << 1|1, mid + 1 , r , i , j));
}
///-----------------------
int geta(int id,int l,int r,int i,int j)
{
    if (r < i || j < l) return 0;
    if (i <= l && r <= j) return ITa[id];
    int mid = l + r >> 1;
    return max(geta(id << 1 , l , mid , i , j),
               geta(id << 1|1 , mid + 1 , r , i , j));
}
///-----------------------
void solve1()
{
    long long res = 0;
    for (int i = 1 ; i <= n ; ++i)
    {
        int ma = 0;
        int mi = 1e9;
        for (int j = i ; j <= n ; ++j)
        {
            ma = max(ma,a[j]);
            mi = min(mi,a[j]);
            res = (res + 1ll * (j - i + 1) * mi * ma) % 1000000000;
        }
    }
    cout << (res % 1000000000 + 1000000000) % 1000000000;
}
///-----------------------
void solve2()
{
    for (int i = 1 ; i <= n ; ++i)
    {
        la[i] = i - 1;
        while (a[la[i]] < a[i] && la[i] > 0) la[i] = la[la[i]];
    }
    for (int i = 1 ; i <= n ; ++i)
    {
        li[i] = i - 1;
        while (a[li[i]] > a[i] && li[i] > 0) li[i] = li[li[i]];
    }
    memset(ITi,0x3f,sizeof(ITi));
    build(1,1,n);
    long long res = 0;
    for (int i = 1 ; i <= n ; ++i)
    {
        int ma = a[la[i]];
        int mi = geti(1,1,n,la[i],i);
        res += 1ll * (i - la[i] + 1) * ma * mi;
        mi = a[li[i]];
        ma = geta(1,1,n,li[i],i);
        res += 1ll * (i - li[i] + 1) * ma * mi;
    }
    cout << res;
}
///-----------------------
int main()
{
    freopen("NORMA.INP","r",stdin);
    freopen("NORMA.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 1 ; i <= n ; ++i) cin >> a[i];
    if (n <= 5000) solve1();
    else solve2();
}
