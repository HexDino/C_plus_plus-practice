#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
long long n, s, d;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("rowodd.inp","r",stdin);
    freopen("rowodd.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+1+n);
    s=0;
    d=-1;
    for (int i=1; i<=n; i++)
    {
        d=d+2;
        s=s+d;
        if (a[i]!=s) {cout<<0; return 0;}
    }
    for (int i=1; i<=n; i++)
    {
        cout<<a[i]<<'\n';
    }
}
