#include<bits/stdc++.h>
using namespace std;
int ma = -1,x1,x2,x3,x4,x5,x6;
string x, y, z;
int ghep(string x, string y, string z) {
 /// check xy,xz,xyz
 int len = 0, lenx = x.size(), leny = y.size(), lenz = z.size();
 if (x[lenx-1] == y[0]) {
    len = max(len, lenx + leny);
    if (y[leny-1] == z[0]) len = max(len,lenx+leny+lenz);
 }
 if (x[lenx-1] == z[0]) len = max(len, lenx+lenz);
 return len;
}
int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Gheplt.inp","r",stdin);
    freopen("Gheplt.out","w",stdout);
    cin >> x >> y >> z;
    int lx = x.size(), ly = y.size(), lz = z.size();
   x1 = ghep(x,y,z); ma = max(ma, x1);
   x2 = ghep(x,z,y); ma= max(ma,x2);
   x3=  ghep(y,x,z); ma = max(ma,x3);
   x4 = ghep(y,z,x); ma = max(ma, x4);
   x5 = ghep(z,x,y); ma = max(ma, x5);
   x6 = ghep(z,y,x); ma = max(ma, x6);
   if (ma == 0) cout << max(max(lx,ly),lz);
   else cout << ma;
}
