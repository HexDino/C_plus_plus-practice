#include <bits/stdc++.h>
using namespace std;
long long n, k;
long long f[100000001];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("fibo9.inp","r",stdin);
    freopen("fibo9.out","w",stdout);
    cin>>n>>k;
    f[1]=1;
    f[2]=1;
    for (int i=3; i<=n; i++)
    {
        f[i]=(f[i-1]+f[i-2])%100;
    }
    sort(f+1,f+n+1);
    cout<<f[k];
}
