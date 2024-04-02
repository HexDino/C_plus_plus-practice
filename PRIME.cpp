#include<bits/stdc++.h>
using namespace std;
long long n, dem = 0;;
bool ch(int n) {
   if (n < 2) return false;
   else {
    for (int i = 2 ; i <= sqrt(n) ; i++){
        if (n % i == 0) return false;
    }
    return true;
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("prime.inp","r",stdin);
    //freopen("prime.out","w",stdout);
    cin >> n;

    for (int i = 2 ; i <= (int)sqrt(n) ; i++) {
         if (ch(i) == true) dem++;
    }
    cout << dem;
}
