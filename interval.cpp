#include<bits/stdc++.h>
using namespace std;
long long r,l,dem=0,i;
void mo()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
freopen("interval.inp","r",stdin);
freopen("interval.out","w",stdout);
}
void nhap()
{
cin>>l>>r;
}
bool ktra(long long n)
{
    if(n<=9) return true;
    else
        {
        long long a=n%10;
        long long b;
        while(n>=10)
            {
            n=n/10;
            }
        b=n;
        if(b==a) return true;
        else return false;
        }
}
void xuli()
{
    for(i=l;i<=r;i++)
        {
        if(ktra(i)) dem++;
        }
}
void xuat()
{
    cout<<dem;
}
int main()
{
mo();
nhap();
xuli();
xuat();
}
