#include<bits/stdc++.h>
#define ll long long
using namespace std;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bintodec.inp","r",stdin);
    freopen("bintodec.out","w",stdout);
}
string s ;
ll res,d;
int main()
{   mo();
    while(cin>>s)
    {
       d=1;
       res=0;
        for(int i =s.size()-1; i>= 0 ; i--)
        {
            res+=d*(s[i]-48);
            d*=2;
        }
        cout<<res<<endl;
    }

}
