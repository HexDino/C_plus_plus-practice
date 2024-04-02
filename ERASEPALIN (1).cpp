#include<bits/stdc++.h>
using namespace std;
long long t,n,a[1000006];
bool doixung(vector <long long> a)
{
    long long h=a.size();
    for(int i=0;i<h/2;i++)
    {
        if(a[i]!=a[h-i-1]) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("ERASEPALIN.inp","r",stdin);
    freopen("ERASEPALIN.out","w",stdout);
    cin>>t;
    while(t--)
    {
        vector <long long> l;
        cin>>n;
        int k=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            l.push_back(a[i]);
        }
        if(doixung(l)) cout<<"Yes"<<'\n';
        else
        {
            for(int i=1;i<=n;i++)
        {
            vector <long long> v;
            for(int j=1;j<=n;j++)
            {
                if(a[j]!=a[i]) v.push_back(a[j]);
            }
            if(doixung(v)) {cout<<"Yes"<<'\n'; k=1; break;}
        }
            if(k==0) cout<<"No"<<'\n';
        }
    }
    return 0;
}

