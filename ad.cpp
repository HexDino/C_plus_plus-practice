#include<bits/stdc++.h>
using namespace std;
long long a[999999],b[999999],m,n,dem=0,i;
string s1,s2;
void mo()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
freopen("ad.inp","r",stdin);
freopen("ad.out","w",stdout);
}
void nhap()
{
    cin>>s1;
    cin>>s2;
    m=s1.length();
    n=s2.length();
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
}
void khoitao()
{
    for(i=0;i<m;i++)
        {
        a[s1[i]]++;
        }
    for(i=0;i<n;i++)
        {
        b[s2[i]]++;
        }
}
void xuli()
{
    for(i='a';i<='z';i++)
        {
        if(a[i]!=b[i]) dem=dem+abs(a[i]-b[i]);
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
khoitao();
xuli();
xuat();
}

