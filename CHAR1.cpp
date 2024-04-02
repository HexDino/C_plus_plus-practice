#include<bits/stdc++.h>
using namespace std;
long b[100000],mx=0,mn=1000;
char a[1000050];
int main()
{
    freopen("CHAR.inp","r",stdin);
    freopen("CHAR.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
gets(a);
for(long i=0;i<strlen(a);i++)
{
b[a[i]]++;
mx=max(mx,long(a[i]));
mn=min(mn,long(a[i]));
}
for(long i=mn;i<=mx;i++)
{
if(b[i]!=0)
{cout<<char(i)<<" "<<b[i]<<endl;}
}
return 0;
}

