#include<bits/stdc++.h>
using namespace std;
long long n,f[10000001];
const long long co = 1e9;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("lineup.inp", "r", stdin);
    freopen("lineup.out", "w", stdout);
    cin >> n;
    f[2] = 1;
    f[3] = 3;
    for (int i = 4 ; i <= n ; i++)
    {
        f[i] = ((i-1)*f[i-1] + (i-2)*f[i-2]) % co;
    }
    cout << f[n];
}
