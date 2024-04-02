#include<bits/stdc++.h>
using namespace std;
long long m,n,k,maxx=-1,i,j;
string s1,s2,kq;
void mo()
{
freopen("gattaca.inp","r",stdin);
freopen("gattaca.out","w",stdout);
}
void nhap()
{
cin>>n>>m>>k;
cin>>s1;
cin>>s2;
}
void xuli()
{
for(i=0;i<n;i++)
    {
    for(j=1;j<n;j++)
        {
        string s=s1.substr(i,j);
        long long a=s2.find(s);
        if(a!=-1)
            {
            long long dem=1;
            for(long long l=a+1;l<m;l++)
                {
                if(s2.substr(l,j)==s) dem++;
                if(dem==k)
                    {
                    if(maxx<j)
                        {
                        maxx=j;
                        kq=s;
                        }
                    else if(maxx==j)
                        {
                        if(s<kq) kq=s;
                        }
                    break;
                    }
                }
            }
        }
    }
}
void xuat()
{
cout<<kq;
}
int main()
{
mo();
nhap();
xuli();
xuat();
}

