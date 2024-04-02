#include <bits/stdc++.h>
using namespace std;
long long a, b, dt=0, dg=0, ma, mi;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("t1g2.inp", "r", stdin);
    freopen("t1g2.out", "w", stdout);
    cin>>a>>b;
    dt = max(a,b) - min(a,b);
    if (a > b) swap(a,b);
    while (b > a)
    {
        b -= 2;
        dg++;
    }
    cout << min(dg,dt);
}
