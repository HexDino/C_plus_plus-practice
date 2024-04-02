#include <bits/stdc++.h>
using namespace std;
#define fo(i , a , b) for(int i = a ; i <= b ; i++)
#define int long long
int n , k , a[100001] , sum = 0 , res ;
void Read()
{
   freopen("wires.inp" , "r" , stdin) ;
   freopen("wires.out" , "w" , stdout) ;
}

void In()
{
   cin >> n >> k ;
   fo(i , 1 , n)
   cin >> a[i] , sum += a[i] ;
}

bool ktra(int x)
{
   int ans = 0 ;
   fo(i , 1 , n)
   {
      ans += a[i] / x ;
   }
   if (ans >= k)
      return true ;
   return false ;
}

void Sol()
{
   int dau = 1 ;
   int cuoi = sum / k ;
   while(dau <= cuoi)
   {
      int giua = (dau + cuoi) / 2 ;
      bool b = ktra(giua) ;
      if (b == true)
      {
         res = giua ;
         dau = giua + 1 ;
      }
      else
      {
         cuoi = giua - 1;
      }
   }
   cout << res ;
}

#undef int long long

int main()
{
   Read() ;
   #define int long long
   In() ;
   Sol() ;
}
