#include <bits/stdc++.h>
using namespace std;
int a, n;
string ans="1";
string tinh(string s, int b)
{
    string s1="";
    int c, l=0;
    for (int i=s.size()-1; i>=0; i--)
    {
        c=(s[i]-48)*b;
        c+=l;
        l=0;
        if (c>=10)
        {
            l=c/10;
            c=c%10;
        }
        s1=char(c+48)+s1;
    }
    if (l>0) s1=char(l+48)+s1;
    return s1;
}
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("power.inp","r",stdin);
    freopen("power.out","w",stdout);
    cin>>a>>n;
    for (int i=1; i<=n; i++)
    {
        ans=tinh(ans,a);
    }
    cout<<ans;
}
