#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], ans = 0;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("t1h.inp","r",stdin);
    freopen("t1h.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a+1,a+n+1);
    for (int i = 1 ; i < n ; i++)
    {
        ans = ans + a[n] - a[i];
    }
    cout << ans;
}
