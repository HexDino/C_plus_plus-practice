#include <bits/stdc++.h>
using namespace std;
int f[1000005];
bool nt[1000005];
///-------------------
bool check(int x)
{
    int s = 0;
    while (x > 0)
    {
        s = s + (x % 10) * (x % 10);
        x /= 10;
    }
    return nt[s];
}
///-------------------
int main()
{
    freopen("BEAUTY.INP","r",stdin);
    freopen("BEAUTY.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    memset(nt,true,sizeof(nt));
    nt[1] = false;
    for (int i = 2 ; i <= 1000 ; ++i)
    if (nt[i])
        for (int j = 2 ; j <= 1000000 / i ; ++j)
        nt[i * j] = false;
    int d = 0;
    int i = 1;
    while (d <= 1000000)
    {
        if (check(i)) f[++d] = i;
        ++i;
    }
    int x;
    while (cin >> x) cout << f[x] << '\n';
}
