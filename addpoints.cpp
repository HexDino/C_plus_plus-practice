#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], f[100001], ucln = 0, s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("addpoints.inp","r",stdin);
    freopen("addpoints.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a+1,a+n+1);
    for (int i = 1 ; i <= n - 1 ; i++)
    {
        f[i] = abs(a[i+1]-a[i]);
    }
    for (int i = 1 ; i <= n - 1 ; i++)
    {
        ucln = __gcd(f[i],ucln);
    }
    for (int i = 1 ; i <= n - 1 ; i++)
    {
        s = s + f[i] / ucln - 1;
    }
    cout << s;
}
