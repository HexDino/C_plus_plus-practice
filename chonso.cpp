#include <bits/stdc++.h>
using namespace std;
long long a[200000], v[1000000];
long long n, ma=0, mi=1e6;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("chonso.inp","r",stdin);
    freopen("chonso.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        v[a[i]]++;
        ma=max(ma, a[i]);
        mi=min(mi, a[i]);
    }
    sort(v+mi, v+ma+1);
    cout<<v[ma]+v[ma-1];
}
