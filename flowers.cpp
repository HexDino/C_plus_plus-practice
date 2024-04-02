#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
long long n, k, s=0, j=0, l=1;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("flowers.inp","r",stdin);
    freopen("flowers.out","w",stdout);
    cin>>n>>k;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+1+n);
    j=0;
    s=0;
    l=1;
    for(int i=n; i>=1; i--)
    {
        j++;
        k:;
        if(j<=k) {s=s+a[i]*l;}
        else
        {
            j=1;
            l++;
            goto k;
        }
    }
    cout<<s;
}
