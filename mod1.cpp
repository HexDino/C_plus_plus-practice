#include <bits/stdc++.h>
using namespace std;
long long n, k, s=1;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("mod1.inp","r",stdin);
    freopen("mod1.out","w",stdout);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        s=(s*i)%k;
    }
    cout<<s;
    return 0;
}
