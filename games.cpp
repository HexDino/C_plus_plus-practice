#include <bits/stdc++.h>
using namespace std;
long long a,b,c,mi=INT_MAX,ma=INT_MIN,d,ci,g,s1,s2;
//==========================================================================================
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("games.inp","r",stdin);
    freopen("games.out","w",stdout);
}
//==========================================================================================
int main ()
{
    mo();
    cin>>a>>b>>c;
    mi=min(mi,min(a,min(b,c)));
    ma=max(ma,max(a,max(b,c)));
    d=mi;
    ci=ma;
    g=a+b+ci-mi-ma;
    s1=g-d;
    s2=c-g;
    if (s1>s2) cout<<s1-1;
    else cout<<s2-1;
    return 0;
}
