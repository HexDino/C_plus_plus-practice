#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(long i=long(a);i<=long(b);i++)
#define ma 105
#define fi first
#define se second
typedef long long ll;
typedef pair<ll, ll> ii;
ll m,n,k,a[ma][ma],f[ma][ma],d=0;
const ll h[4]={-1,0,1,0};
const ll c[4]={0,1,0,-1};
void bfs(ll i, ll j)
{
    queue<ii> q;
    ii p; p.fi = i; p.se = j;
    q.push(p);
    while(!q.empty())
    {
        ii u = q.front();
        q.pop();
        rep(t,0,3)
        {
            ll x = u.fi + h[t] ;
            ll y = u.se + c[t] ;
            if(x>=1&&x<=m&&y>=1&&y<=n)
            {
                if(f[x][y]==0)
                {
                    f[x][y]=1;
                    ii v; v.fi= x; v.se = y;
                    q.push(v);
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("regions.inp","r",stdin);
    freopen("regions.out","w",stdout);
    cin>>m>>n>>k;
    ll x,y,z,t;
    memset(f,0,sizeof(f));
    memset(a,0,sizeof(a));
    rep(l,1,k){
        cin>>x>>y>>z>>t;
        rep(i,x,z) rep(j,y,t) a[i][j]=f[i][j]=1;
    }
    rep(i,1,m)
        rep(j,1,n)
        {
            if(f[i][j]==0)
            {
                ++d;
                f[i][j]=1;
                bfs(i,j);
            }
        }
    cout << d;
    return 0;
}
