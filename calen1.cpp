#include<bits/stdc++.h>
#define fi(a,b,c) for (int a = b;a <= c;a++)
#define fd(a,b,c) for (int a = b;a >= c;a--)
#define ft first
#define se second
#define ll long long
#define si size()
#define file "calen"
using namespace std;
const int MAXN=1e6+10;
string can[11]={"Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky","Canh","Tan","Nham"};
string chi[13]={"Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui","Than","Dau","Tuat","Hoi"};
int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
    //freopen("t.inp","r",stdin);
    //freopen("t.out","w",stdout);
    freopen(file".inp","r",stdin);freopen(file".out","w",stdout);
    ll n;cin>>n;
    cout<<can[((n%10)+8)%10]<<" "<<chi[((n%12)+9)%12];
    return 0;
}
