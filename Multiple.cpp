#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for (int i=a;i<=b;i++)
using namespace std;
ll n,x,m,d=0;
int sm(int x,int y)
{
    ll s=1;
    f(i,1,y)
    s*=x;
    return s;
}
int main ()
{
    //freopen("Multiple.inp","r",stdin);
    //freopen("Multiple.out","w",stdin);
    cin>>n>>x;
    m=n/2;
    f(i,1,sm(10,m))
    {
        ll cnt1=i,kq=i;
        while(cnt1>0)
        {
            kq=kq*10+cnt1%10;
            cnt1/=10;
        }
        if (kq%x==0&& kq<sm(10,n)) d++;

                ll cnt2=i/10,kq2=i;
        while(cnt2>0)
        {
            kq2=kq2*10+cnt2%10;
            cnt2/=10;
        }
        if (kq2%x==0&& kq2<sm(10,n)) d++;

    }
    cout<<d+1;
}
