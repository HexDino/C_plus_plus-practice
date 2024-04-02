#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) for(i=x;i<y;i++)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) for(i=x;i>y;i--)
#define l(a) a.size()
#define endl '\n'
using namespace std;
string s;
ll i,d=1;
int main()
{
    freopen("char.inp","r",stdin);
    freopen("char.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin,s);
    sort(s.begin(),s.end());
    r(i,0,l(s))
    {
        if(s[i]==s[i+1]) d++;
        else
        {
            cout<<s[i]<<' '<<d<<endl;
            d=1;
        }
    }
    return 0;
}
