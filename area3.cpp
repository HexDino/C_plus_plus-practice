#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
//==========================================================================================
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("area3.inp","r",stdin);
    freopen("area3.out","w",stdout);
}
//==========================================================================================
int main ()
{
    mo();
    cin>>a>>b>>c;
    cout<<a*b-b*c-a*c+c*c;
    return 0;
}
