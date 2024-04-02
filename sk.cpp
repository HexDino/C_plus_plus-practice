#include <bits/stdc++.h>
using namespace std;
long long n, a, kq=0;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("sk.inp","r",stdin);
    freopen("sk.out","w",stdout);
    cin>>n;
    for (long long i=0;i<n;i++)
    {
        cin>>a;
        kq=kq^a;
    }
    cout<<kq;
    return 0;
}
