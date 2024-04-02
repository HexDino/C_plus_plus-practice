#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;

void init()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("bintodec.inp","r",stdin);
    freopen("bintodec.out","w",stdout);
}

int bintodec(string s)
{
    int t=0,k=1;
    for(int i=s.size()-1;i>=0;i--)
    {
        t+=(s[i]-48)*k;
        k*=2;
    }
    return t;
}
main()
{
    init();
    while(cin>>s)cout<<bintodec(s)<<'\n';
}

