#include<bits/stdc++.h>
#define file        "strmax"
#define lsb(i)      (i&(-i))
#define int         long long
#define ii          pair<int,int>
#define fi          first
#define se          second
#define pb          push_back
#define F(i,a,b)    for(int i= (a); i<= (b);i++)
#define D(i,a,b)    for(int i= (a); i>= (b);i--)
using namespace std;
int n,m;
int ca[11],cb[11];
string a,b;

void op(const string ff)
{
    ios::sync_with_stdio(0);
    freopen((ff+".inp").c_str(),"r",stdin);
    freopen((ff+".out").c_str(),"w",stdout);
}
void init(){op((fopen("t.inp","r"))?"t":file);}

bool cmp(string a,string b)
{
    return (a.size()!=b.size()) ?a.size()<b.size() :a<b;
}

int32_t main()
{
    init();
    cin>>a>>b;
    for(const char& i:a)ca[i-48]++;
    for(const char& i:b)cb[i-48]++;
    D(i,9,0)if(ca[i] && cb[i])cout<<i;
}
