#include <bits/stdc++.h>
using namespace std;
long long n;
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("abba.inp","r",stdin);
    freopen("abba.out","w",stdout);
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if (s[0]!=s[s.size()-1]) cout<<1<<'\n';
        else
        {
            cout<<0<<'\n';
        }
    }
}

