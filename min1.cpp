#include<bits/stdc++.h>
using namespace std;
long long n,a[10000][10000],i,j,dem,ts,dinh[10000],k,top,mi,l,t,y,s[10000];
void prim()
{
    dem=0;
    ts=0;
    y=1;
    top=1;
    s[top]=y;
    dinh[y]=0;
    while(dem<n-1)
        {
        mi=10001;
        for(i=1;i<=top;i++)
        {
            t=s[i];
            for(j=1;j<=n;j++)
            {
                if(dinh[j]==1&&a[t][j]<mi&&a[t][j]!=0)
                {
                    mi=a[t][j];
                    k=t;
                    l=j;
                }
            }
        }
        dem++;
        ts+=mi;
        dinh[l]=0;
        top++;
        s[top]=l;
        }
}
int main()
{
freopen("min1.INP","r",stdin);
freopen("min1.OUT","w",stdout);
cin>>n;
for(i=1;i<=n;i++)
{
    dinh[i]=1;
    for(j=1;j<=n;j++) cin>>a[i][j];
}
prim();
cout<<ts<<'\n';
return 0;
}
