#include <bits/stdc++.h>
using namespace std;
long long a[1000000];
long long n, dem=0;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("num12.inp","r",stdin);
    freopen("num12.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+1+n);
    for (int i=1; i<=n; i++)
    {
        if (a[i]!=a[i+1]) dem++;
    }
    cout<<dem;
    return 0;
}
