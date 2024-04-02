#include<bits/stdc++.h>
using namespace std;
long long a, b, k, aa, bb;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("abk1.inp","r",stdin);
    freopen("abk1.out","w",stdout);
    cin >> a >> b >> k;
    if (k<0) {cout << 0;return 0;}
    aa = a+k;
    bb = b-k;
    if (aa>b) aa = b;
    if (bb<a) bb = a;
    if (aa<bb) cout << 0; else cout << aa-bb+1;
}
