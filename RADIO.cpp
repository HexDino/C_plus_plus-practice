#include <bits/stdc++.h>
using namespace std;
const int base = 311;
const long long MOD = 1e9 + 7;
int n;
string s;
long long pw[1000005] , hashs[1000005];
///-----------------------
long long geth(int i,int j)
{
    return (hashs[j] - hashs[i - 1] * pw[j - i + 1] + MOD * MOD) % MOD;
}
///-----------------------
bool check(int dis)
{
    int nn = n / dis;
    nn *= dis;
    bool ok1 , ok2;
    ok1 = ok2 = false;
    if (geth(dis+1,nn) == geth(1,nn-dis)) ok1 = true;
    dis = n - nn;
    if (geth(1,dis) == geth(nn+1,n)) ok2 = true;
    return (ok1 && ok2);
}
///-----------------------
int main()
{
    freopen("RADIO.INP","r",stdin);
    freopen("RADIO.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> s;
    s = " " + s;
    pw[0] = 1;
    hashs[0] = 0;
    for (int i = 1 ; i <= n ; ++i) pw[i] = (pw[i-1] * base) % MOD;
    for (int i = 1 ; i <= n ; ++i) hashs[i] = (hashs[i-1] * base + s[i] - 'a' + 1) % MOD;
    for (int i = 1 ; i <= n ; ++i)
    if (check(i))
    {
        cout << i;
        exit(0);
    }
}
