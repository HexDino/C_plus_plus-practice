#include<bits/stdc++.h>
using namespace std;
long long n,k;
string s,ss;
int kt(string s)
{
    long long d=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) d++;
    }
    return d;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("GDX.inp","r",stdin);
    freopen("GDX.out","w",stdout);
    cin >> n;
    while(n--)
    {
        cin>>s;
        if(s.size()<=8) cout<<"1"<<'\n';
        else
        {
            ss="";
            k=0;
            for(int i=0; i<s.size()-1; i++)
            {
                ss+=s[i];
                string sss;
                for(int j= i+1; j<s.size();j++)  sss+=s[j];
                if(kt(ss)<=2&&kt(sss)<=2)
                {
                    k++;
                    break;
                }
            }
            cout<<k<<'\n';
        }
    }
    return 0;
}
