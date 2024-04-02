#include <bits/stdc++.h>
using namespace std;
float a[999999];
long long n,i,d=0;
float x,y;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("b621.inp","r",stdin);
    freopen("b621.out","w",stdout);
}
int main()
{
    mo();
    cin>>n>>x>>y;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]<x||a[i]>y) d++;
    }
    cout<<d;
    return 0;
}
