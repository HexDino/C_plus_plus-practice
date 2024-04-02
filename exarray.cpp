#include<bits/stdc++.h>
using namespace std;
//==========================================================================================
#define f(i,a,b) for(long i=long(a);i<=long(b);i++)
#define f2(i,a,b) for(long i=long(a);i>=long(b);i--)
//==========================================================================================
long long n,a[1000005],b[1000005],dem=0,c[100005],d[100005],mi=1e9,ma=-1e9,res[100005],t=0;
//==========================================================================================
void mo ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("exarray.inp","r",stdin);
    freopen("exarray.out","w",stdout);
}
//==========================================================================================
void dao(long long p,long long q)
{
    long long temp,s;
    if(p<q)
    {
        f(i,p,q-1)
        {
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
            dem++;
            res[dem]=i;
        }
    }
    else
    {
        f2(i,p-1,q)
        {
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
            dem++;
            res[dem]=i;
        }
    }
}
//==========================================================================================
int main()
{
    mo();
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));
    cin>>n;
    f(i,1,n)
    {
        cin>>a[i];
        c[a[i]]++;
        if(a[i]>ma) ma=a[i];
        if(a[i]<mi) mi=a[i];
    }
    f(i,1,n)
    {
        cin>>b[i];
        d[b[i]]++;
    }
    f(i,mi,ma)
    {
        if(c[i]!=d[i])
        {
            cout<<-1;
            return 0;
        }
    }
    t=0;
    while(t<n)
    {
        t++;
        f(i,1,n)
        {
            if(b[t]==a[i]&&t!=i)
            {
                dao(i,t);
                break;
                t=0;
            }
        }
    }
    cout<<dem<<'\n';
    for (int i=1;i<=dem;i++) cout<<res[i]<<' ';
    return 0;
}
