#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n, a[N], r[N], l[N], kq=0, d[N];
int main()
{
    freopen("DAYSO.inp", "r", stdin);
    freopen("dayso.out", "w", stdout);
    cin>>n;
    int MIN=1e9, MAX=0;
    for(int i=1; i<=n; i++)cin>>a[i], d[a[i]]=1, MIN=min(MIN,a[i]), MAX=max(MAX,a[i]);
    if(MIN!=0)r[MIN]=1;
    l[MAX]=1;
    for(int i=1; i<=1e6; i++)
    {
        if(!d[i])continue;
        r[i]=r[i-1]+1;
        kq=max(kq,r[i]);
    }
    for(int i=1e6; i>=1; i--)
    {
        if(!d[i])continue;
        l[i]=l[i+1]+1;
    }
    if(!d[0])cout<<kq;
    else
    {
        for(int i=1; i<=1e6; i++)
        {
            kq=max(r[i-1]+1+l[i+1], kq);
        }
        cout<<kq;
    }
}
