#include <bits/stdc++.h>
using namespace std;
long long h,m,s;
//==========================================================================================
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("clock.inp","r",stdin);
    freopen("clock.out","w",stdout);
}
//==========================================================================================
int main ()
{
    mo();
    cin>>h>>m>>s;
    if (s==59)
    {
        if (m==59) cout<<h+1<<' '<<0<<' '<<0;
        else cout<<h<<' '<<m+1<<' '<<0;
    }
    else cout<<h<<' '<<m<<' '<<s+1;
    return 0;
}
