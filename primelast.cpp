#include <bits/stdc++.h>
using namespace std;
long long n, s=0;
long long a[1001];
bool kt (long long n)
{
    if (n<2) return false;
    else
    {
        for (int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0) return false;
        }
        return true;
    }
}
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen ("primelast.inp","r",stdin);
    freopen ("primelast.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        if (kt(a[i])) s+=(a[i]%10);
    }
    cout<<s;
}
