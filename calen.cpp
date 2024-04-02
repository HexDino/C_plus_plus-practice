#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) for(i=x;i<y;i++)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) for(i=x;i>y;i--)
#define l(a) a.size()
#define endl '\n'
using namespace std;
ll n;
int main()
{
    freopen("calen.inp","r",stdin);
    freopen("calen.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    ll a=n%10;
    switch(a)
    {
        case 0:
        {
            cout<<"Canh ";
            break;
        }
        case 1:
        {
            cout<<"Tan ";
            break;
        }
        case 2:
        {
            cout<<"Nham ";
            break;
        }
        case 3:
        {
            cout<<"Quy ";
            break;
        }
        case 4:
        {
            cout<<"Giap ";
            break;
        }
        case 5:
        {
            cout<<"At ";
            break;
        }
        case 6:
        {
            cout<<"Binh ";
            break;
        }
        case 7:
        {
            cout<<"Dinh ";
            break;
        }
        case 8:
        {
            cout<<"Mau ";
            break;
        }
        case 9:
        {
            cout<<"Ky ";
            break;
        }
    }
    a=n%12;
    switch(a)
    {
        case 0:
        {
            cout<<"Than";
            break;
        }
        case 1:
        {
            cout<<"Dau";
            break;
        }
        case 2:
        {
            cout<<"Tuat";
            break;
        }
        case 3:
        {
            cout<<"Hoi";
            break;
        }
        case 4:
        {
            cout<<"Ty";
            break;
        }
        case 5:
        {
            cout<<"Suu";
            break;
        }
        case 6:
        {
            cout<<"Dan";
            break;
        }
        case 7:
        {
            cout<<"Mao";
            break;
        }
        case 8:
        {
            cout<<"Thin";
            break;
        }
        case 9:
        {
            cout<<"Ty";
            break;
        }
        case 10:
        {
            cout<<"Ngo";
            break;
        }
        case 11:
        {
            cout<<"Mui";
            break;
        }
    }
    return 0;
}
