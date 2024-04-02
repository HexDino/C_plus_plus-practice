#include<bits/stdc++.h>
using namespace std;
string s;
long long d=1,e=0,f=0,mx=0;

void mo()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
freopen("STRING.inp","r",stdin);
freopen("STRING.out","w",stdout);
}

int main()
{
mo();
cin>>s;
if(s[0]==')')
    {
    cout<<"-1";
    return 0;
    }
if(s=="")
    {
    cout<<"0";
    return 0;
    }
for(int i=0;i<s.size();i++)
{
    if(s[i]=='(')e++;
    else f++;
    if(i>=1)
    {
        if(s[i]==s[i-1]) d++;
        else d=1;
        mx=max(d,mx);
    }
}
if(e!=f)cout<<"-1";
else cout<<mx;
return 0;
}
