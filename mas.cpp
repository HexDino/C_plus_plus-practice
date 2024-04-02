#include<bits/stdc++.h>
using namespace std;
long long t, n, S, tt = 0, a[21], q;
void xl(long long i, long long tong, long long ch)
{
    if (i == n + 1)
    {
        if (tong == S)
        {
           tt = 1;
        }
        return;
    }
    if (ch == 1)
    {
        xl(i+1, tong + a[i],ch);
        xl(i+1, tong - a[i],ch);
    }
    else
    {
        xl(i+1, tong + a[i],ch);
        xl(i+1, tong - a[i],ch);
        if (i <= n - 1)
        {
            xl(i+2,tong - a[i]*a[i+1], ch+1);
            xl(i+2,tong + a[i]*a[i+1], ch+1);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("mas.inp","r",stdin);
    freopen("mas.out","w",stdout);
    cin >> t;
    for ( q = 1 ; q <= t ; q++)
    {
        cin >> n >> S;
        tt = 0;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
        }
        xl(1,0,0);
        if (tt == 0) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
}
