#include <bits/stdc++.h>
using namespace std;
long long a[999999];
long long n,i,ma=-99999999;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","W",stdout);
}
int main ()
{
    mo();
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]<0) ma=max(ma,a[i]);
    }
    if (ma!=-99999999) cout<<ma;
    else cout<<0;
    return 0;
}
