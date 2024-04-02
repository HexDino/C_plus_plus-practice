#include<bits/stdc++.h>
using namespace std;
long long n,k,dem,a[10000000],ans,xx;
vector <long long> v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BSQUARE.inp","r",stdin);
    freopen("BSQUARE.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=i;
  bool kt[10000];
  memset(kt,true,sizeof(kt));
  for (int i = 2; i <= sqrt(n) ; i++)
    if (kt[i] == true)
      for (int j = 2 * i; j <= sqrt(n); j+=i)
         kt[j] = false;
  //
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (kt[i] == true)
     {
      long long y=i*i;
      long long t=1;
      while(y*t<=n)
      {
          while(a[y*t]%y==0) a[y*t]/=y;
          t++;
      }
     }
  }
  sort(a+1,a+1+n);
  for(int i=1;i<=n;i++)
  {
      long long c=1;
      while(a[i]==a[i+c])
      {
          c++;
          dem++;
      }
  }
  cout<<dem;
}
