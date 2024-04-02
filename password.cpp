#include<bits/stdc++.h>
using namespace std;
string s;
long long m=0,a[100000000],t=1,res;
bool kt(long long a)
{
if(a<=1) return false;
if(a==2) return true;
for(long long i=2;i<=sqrt(a);i++)
    if(a%i==0) return false;
return true;
}
int main()
{
    freopen("password.inp","r",stdin);
    freopen("password.out","w",stdout);
cin>>s;
long long n=s.length();
for(long long i=0;i<n;i++)
    {
        if(s[i]<='9'&&s[i]>='0')
        {
        long long j=i;
        m=0;
        while(s[j]<='9'&&s[j]>='0')
        {
            m=m*10+int(s[j]-48);
            if(kt(m)) res=max(m,res);
            j++;
        }
        }
    }
    cout<<res;
}
