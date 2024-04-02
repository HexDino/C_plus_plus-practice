#include<bits/stdc++.h>
using namespace std;

void op(const string ff)
{
    ios::sync_with_stdio(0);
    freopen((ff+".inp").c_str(),"r",stdin);
    freopen((ff+".out").c_str(),"w",stdout);
}
void init(){op((fopen("t.inp","r"))?"t":"soam");}

int32_t main()
{
    init();
    int n,res=-1e9;cin>>n;
    vector<int>a(n);for(int& i:a)cin>>i;
    for(int& i:a)if(i<0)res=max(res,i);
    if(res+1e9==0)cout<<0;else cout<<res;
}
