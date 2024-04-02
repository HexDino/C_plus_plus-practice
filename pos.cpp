#include <bits/stdc++.h>
using namespace std;
long long n,a,b,d=0;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pos.inp","r",stdin);
    freopen("pos.out","w",stdout);
}
int main ()
{
    mo();
    cin>>n>>a>>b;
    for(int i=a;i<n;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(i+j==n-1) d++;
        }
    }
    cout<<d;
    return 0;
}
