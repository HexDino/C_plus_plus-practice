#include<bits/stdc++.h>
using namespace std;
long long n, m, a[101], s = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("light.inp","r",stdin);
    freopen("light.out","w",stdout);
    cin >> n >> m;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        a[i] += 2;
        s *= a[i];
    }
    s = a[1]*a[2]/__gcd(a[1],a[2]);
    if (n ==1) {cout << 1 + m / a[1];return 0;}
    for (int i = 3 ; i <= n ; i++)
    {
        s = s * a[i] / __gcd(a[i],s);
    }
    cout << 1 + m / s;
}
