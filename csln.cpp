#include <bits/stdc++.h>
using namespace std;
string s;
long long n,i;
void mo()
{
freopen("csln.inp","r",stdin);
freopen("csln.out","w",stdout);
}
int main ()
{
mo();
cin>>s;
n=s.length();
sort(s.begin(),s.end());
cout<<s[n-1];
return 0;
}
