#include <bits/stdc++.h>
using namespace std;
string s;
long long d=0;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);
}
int main ()
{
    getline(cin,s);
    for (int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9') d++;
    }
    cout<<d;
    return 0;
}
