#include<bits/stdc++.h>
using namespace std;
long long n, a[1001], t, x, d[1000001], m = 0, so[1000001], q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bieudientong.inp","r",stdin);
   freopen("bieudientong.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {cin >> a[i];}
    //d[0] = 1;
    sort(a+1,a+n+1);
    for (int i = 1 ; i <= n  ;i++)
    {
       if (a[i] > 1e6) break;
       int mm = m;
       for (int t = 1 ; t <= mm ; t++)
       {
           int x = so[t] + a[i];
           if (x <= 1e6 && d[x] == 0)
           {
               d[x] = 1;
               so[++m] = x;
           }
       }
       if (d[a[i]] == 0)
       {
           d[a[i]] = 1;
           so[++m] = a[i];
       }
    }
    cin >> t;
    for (int i = 1 ; i <= t ; i++)
    {
        cin >> q;
        cout << d[q] << '\n';
    }
}
