#include <bits/stdc++.h>
using namespace std;
string a,b;
long long n,m,s=0;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("so.inp","r",stdin);
    freopen("so.out","w",stdout);
    cin>>a>>b;
    while (a[0]=='0') a.erase(0,1);
    while (b[0]=='0') b.erase(0,1);
    n=a.size();
    m=b.size();
    if (n>m) {cout<<1;return 0;}
    else if(n<m) {cout<<-1;return 0;}
    else if (n==m)
    {
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]>b[i]) s+=1;
            else if (a[i]>b[i]) s+=-1;
            else s+=0;
        }
        cout<<s;
        return 0;
    }
}
