#include <bits/stdc++.h>
using namespace std;
long long n,i,d=0,m;
long long a[999999];
bool kt (long long n)
{
    if(n<=1) return false;
    else
    {
        long long a=0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0) a++;
        }
        if (a==0) return true;
        else return false;
    }
    return false;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("daynt.inp","r",stdin);
    freopen("daynt.out","w",stdout);
    cin>>m;
    i=1;
    while (cin>>a[i]) i++;
    n=i-1;
    sort(a+1,a+1+n);
    d=0;
    for (i=1; i<=n; i++)
    {
        if (kt(a[i])&&d<m) {cout<<a[i]<<' ';d++;}
    }
}
