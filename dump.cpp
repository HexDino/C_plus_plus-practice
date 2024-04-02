#include <bits/stdc++.h>
using namespace std;
string x, y, z, t;
long long ma, maa;
char x1,x2,v,y2,z1,z2;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("gheplt.inp","r",stdin);
    freopen("gheplt.out","w",stdout);
    cin>>x>>y>>z;
    x1=x[0]; x2=x[x.size()-1];
    v=y[0]; y2=y[y.size()-1];
    z1=z[0]; z2=z[z.size()-1];
    if (x2==v&&y2==z1) {t=x+y+z;long long m= t.size(); maa=max(maa,m);}
    if (x2==z1&&z2==v) {t=x+z+y;long long m= t.size(); maa=max(maa,m);}
    if (z2==v&&y2==z1) {t=z+y+x;long long m= t.size(); maa=max(maa,m);}
    if (z2==x1&&x2==v) {t=z+x+y;long long m= t.size(); maa=max(maa,m);}
    if (y2==x1&&x2==z1) {t=y+x+z;long long m= t.size(); maa=max(maa,m);}
    if (y2==z1&&z2==x1) {t=y+z+x;long long m= t.size(); maa=max(maa,m);}
    if(x2==v) {t=x+y; long long m= t.size(); maa=max(maa,m);}
    if(x2==z1) {t=x+z;long long m= t.size(); maa=max(maa,m);}
    if(y2==x1) {t=y+x; long long m= t.size(); maa=max(maa,m);}
    if(y2==z1) {t=y+z; long long m= t.size(); maa=max(maa,m);}
    if(z2==x1) {t=z+x; long long m= t.size(); maa=max(maa,m);}
    if(z2==v) {t=z+y; long long m= t.size(); maa=max(maa,m);}
    if(maa==0)
        {

            ma=max(x.size(),max(y.size(),z.size()));
            if(x.size()==ma) cout<<x.size();
            if(y.size()==ma) cout<<y.size();
            if(z.size()==ma) cout<<z.size();
        }
        else cout<<maa;
}
