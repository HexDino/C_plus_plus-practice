#include<bits/stdc++.h>
using namespace std;
long long a[1000000],i,j,ma=0,mi=0,ma1=0,mi1=0,b[1000000],n;
int main ()
{
    cin>>n;
    for(i=1;i<=n;i++) {cin>>a[i]>>b[i];}
    sort(a+1,a+n+1);sort(b+1,b+n+1);
    cout<<a[1]<<" "<<b[1]<<endl<<a[n]<<" "<<b[n];
    return 0;
}
