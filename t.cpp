#include<bits/stdc++.h>
using namespace std;
long long n, kk, a[5001], b[5001], ma = 0, ans;
void dichuyen(int x,int y, int so, int val)
{
    //cout << x << ' ' << y << ' ' << val << '\n';
    if (so > 2*n - kk) return;
    if (so == 2*n - kk && y < n) return;
    if (y == n)
    {
       if (so == 2*n-kk) ma = max(ma,ans - val);
       // cout << ma << '\n' << '\n';
    }
    if (x == 2)
    {
        dichuyen(x-1,y,so+1,val+a[y]);
        dichuyen(x,y+1,so+1,val+b[y+1]);
    }
    if (x==1)
    {
        dichuyen(x+1,y,so+1,val+b[y]);
        dichuyen(x,y+1,so+1,val+a[y+1]);
    }
}
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("lane.inp","r",stdin);
    freopen("lane.out","w",stdout);
    cin >> n >> kk;
    for (int i = 1 ; i <= n ; i++) {cin >> a[i];ans+= a[i];}
    for (int i = 1 ; i <= n ; i++) {cin >> b[i];ans+=b[i];}
   // cout << ans << '\n';
    dichuyen(1,1,1,a[1]);
    dichuyen(2,1,1,b[1]);
    cout << ma;
}

