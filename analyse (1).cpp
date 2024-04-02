#include <bits/stdc++.h>
using namespace std;
#define fo(i , a , b) for(int i = a ; i <= b ; i++)
#define int long long
int n , dem[1001];

void Read()
{
   freopen("analyse.inp" , "r" , stdin) ;
   freopen("analyse.out" , "w" , stdout) ;
}

void ptich(int a)
{
   int i = 2 ;
   while(i <= a)
   {
      if (a % i == 0)
      {
         dem[i]++;
         a /= i ;
      }
      else i++;
   }
}

void Sol()
{
   memset(dem, 0 , sizeof dem) ;
   fo(i , 2 , n)
   {
      ptich(i) ;
   }
   fo (i , 2 , n)
   {
      if (dem[i] > 0)
         cout << dem[i] << " ";
   }
   cout <<  '\n' ;
}
#undef int long long

int main()
{
   Read() ;
   #define int long long
   while(cin >> n)
   {
         Sol() ;
   }
}
