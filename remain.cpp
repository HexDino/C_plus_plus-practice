#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, t1=1,t2=1,b[10000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("remain.inp","r",stdin);
    freopen("remain.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for (int i = 1 ; i <= n - 1 ; i++)
    {
        b[i] = a[i+1] - a[i];
    }
    s = 0;
    for (int i = 1 ; i <= n - 1 ; i++)
    {
        s = __gcd(s,b[i]);
    }
    cout << s;
}
