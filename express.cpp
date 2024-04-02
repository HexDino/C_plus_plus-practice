#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],k,tong,i;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("express.inp","r",stdin);
    freopen("express.out","w",stdout);
}
void nhap()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        {
        cin>>a[i];
        }
}
void xuli()
{
    k=n-k-1;
    sort(a+2,a+1+n);
    tong=a[1];
    for(i=2;i<=n;i++)
        {
        if(k>0)
            {
            tong=tong-a[i];
            k--;
            }
        else tong=tong+a[i];
        }
}
void xuat()
{
    cout<<tong;
}
int main()
{
    mo();
    nhap();
    xuli();
    xuat();
    return 0;
}
