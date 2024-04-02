#include <bits/stdc++.h>
using namespace std;
long long n, k, x, s, ans=0;
long long dem[500005];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("chiahetk.inp","r",stdin);
    freopen("chiahetk.out","w",stdout);
    cin>>n>>k;
    dem[0]=1;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        s=s+x;
        s=s%k;
        s=(s+k)%k;
        ans+=dem[s];
        dem[s]++;
    }
    cout<<ans;
}
