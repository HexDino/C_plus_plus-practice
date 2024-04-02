#include<bits/stdc++.h>
#define int         long long
#define ii          pair<int,int>
#define fi          first
#define se          second
#define pb          push_back
#define F(i,a,b)    for(int i= (a); i<= (b);i++)
#define D(i,a,b)    for(int i= (a); i>= (b);i--)
using namespace     std;
const int inf=      4557430888798830399;

void op(const string ff)
{
    ios::sync_with_stdio(0);
    freopen((ff+".inp").c_str(),"r",stdin);
    freopen((ff+".out").c_str(),"w",stdout);
}
void init(){op((fopen("t.inp","r"))?"t":"hcn");}

namespace ggez
{
    int n;
    int f[10001];
    struct hcn
    {
        int x1,y1,x2,y2;
        void trim(){if(x1>x2)swap(x1,x2);if(y1>y2)swap(y1,y2);}
    }a[10001];
    istream& operator>>(istream& is,hcn& k)
        {is>>k.x1>>k.y1>>k.x2>>k.y2;k.trim();return is;}
    ostream& operator<<(ostream& os,hcn k)
        {os<<k.x1<<' '<<k.y1<<' '<<k.x2<<' '<<k.y2;return os;}

    bool operator>= (hcn a,hcn b)
        {return a.x1<=b.x1 && a.x2>=b.x2 && a.y1<=b.y1 && a.y2>=b.y2;}
    bool cmp (hcn a,hcn b)
        {return a.x1<=b.x1;}
    void solve()
    {
        init();
        cin>>n;
        F(i,1,n)cin>>a[i];
        sort(a+1,a+n+1,cmp);fill(f+1,f+n+1,1);
        F(i,1,n)F(j,1,i-1)if(a[j]>=a[i])f[i]=max(f[i],f[j]+1);
        cout<<*max_element(f+1,f+n+1);
    }
}

int32_t main(){ggez::solve();}
