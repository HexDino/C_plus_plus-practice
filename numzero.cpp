#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
long long n, dem = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("numzero.inp","r",stdin);
    freopen("numzero.out","w",stdout);
   cin >> n;
   while (n >= 5) {
      n = n / 5;
      dem = dem + n;
   }
   cout << dem;
}
