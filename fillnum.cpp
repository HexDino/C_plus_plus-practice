#include <bits/stdc++.h>
using namespace std;
string s;
long long res=0, d=1;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("fillnum.inp","r",stdin);
    freopen("fillnum.out","w",stdout);
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]==s[i+1]) d++;
        else
        {
            res=max(res,d);
            d=1;
        }
    }
    cout<<res+1;
}
