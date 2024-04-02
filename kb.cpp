#include <bits/stdc++.h>
using namespace std;
long long k, n, x, y;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("kb.inp","r",stdin);
    freopen("kb.out","w",stdout);
    cin>>k;
    while(k--)
    {
        cin >> n >> x >> y;
        n--;
        if(n*(y-x) > 0) cout << n*(y-x) << '\n';
        else cout << 0 << '\n';
    }
}
