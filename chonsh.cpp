#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
long long n, a[N], p, f[N];
bool kt[N];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("chonsh.inp","r",stdin);
    freopen("chonsh.out","w",stdout);
    cin>>n;
    kt[0]=true;
    f[0]=0;
    long long mi=0;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        f[i]=f[i-1]+a[i];
        if (f[i] > mi)
        {
            kt[i]=true;
            mi=f[i];
        }
    }
    cin>>p;
    long long ans=-1;
    long long d=n;
    for(int i=n; i>=0; i--)
    {
        if (kt[i])
        {
            while(i<d)
            {
                if (f[d]-f[i]<p)
                {
                    ans=max(ans, d-i);
                    break;
                }
                d--;
            }
        }
    }
    cout<<ans;
    return 0;
}
