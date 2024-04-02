#include<bits/stdc++.h>

using namespace std;

long long a[4];
long long s1 , s2 ;
void doc ()
{
    freopen("capsocong.inp","r",stdin);
    freopen("capsocong.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
int main ()
{
    doc();
    cin >> a[1] >> a[2] >> a[3] ;
    sort(a+1,a+4);
    s1 = a[2] - a[1];
    s2 = a[3] - a[2] ;
    if( s1 == s2 ) cout << s1 + a[3] ;
    else
    {
        if(s1 > s2) cout << a[1] +s2;
        else cout << s1 + a[2] ;
    }
    return 0 ;
}
