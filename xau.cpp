#include <bits/stdc++.h>
using namespace std;
int kt (string d,string n)
{
    long long f,m,e=0;
    string s2;
    f=d.size();
    m=n.size();
    for (int i=0;i<f;i++)
        {
        s2=d.substr(i,m);
        if (s2==n) e++;
        }
    return e;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xau.inp","r",stdin);
    freopen("xau.out","w",stdout);
    long long n,i,j,ma=0;
    string s;
    cin>>n>>s;
    for (i=0;i<s.size();i++)
    {
        string g;
        for ( j=i;j<s.size();j++)
        {
            g=s.substr(i,j-i+1);
            if (kt(s,g)>1)
            {
                if (ma<j-i+1) ma=j-i+1;
            }
        }
    }
    cout<<ma;
    return 0;
}
