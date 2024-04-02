#include<bits/stdc++.h>
using namespace std;
string t, s;
long long res;
int dp[30][2000006];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("gn.inp","r",stdin);
    freopen("gn.out","w",stdout);
    cin>>t>>s;
    for(int i='a'-'a'; i<='z'-'a'; i++)
    {
        char z = i +'a';
        for(int j=1 ; j<=s.size(); j++)
        {
            dp[i][j] = dp[i][j-1] +(s[j-1] == z);
        }
    }
    for(int i=0; i<t.size(); i++)
    {
        int z = t[i] -'a';
        res = res +(1LL) *(dp[z][s.size() -(t.size()-i-1)] -dp[z][i]);
    }
    cout<<res;
}
