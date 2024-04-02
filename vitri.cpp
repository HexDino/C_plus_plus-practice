#include<bits/stdc++.h>
#define file "vitri"

using namespace std;
typedef long double ldb;
typedef long long int lli;

const int N = 1e5+5;
const int inf = 1e9 + 7;
const lli lnf = 1e18 + 7;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    if (fopen("t.inp","r")){
        freopen("t.inp","r",stdin);
        freopen("t.out","w",stdout);
    } else{
        freopen(file".inp","r",stdin);
        freopen(file".out","w",stdout);
    }

    int n;  cin >> n;
    int x = 0, y = 0, base = 1;
    char input;
    for(int i = 1;i <= n;i++){
        cin >> input;
        if (base == 1){
        if (input == 'L') {x--;  base = 4;}else
        if (input == 'R') {x++;  base = 2;}else
        if (input == 'G') {y++;  base = 1;}else
                          {y--;  base = 3;}
        } else
        if (base == 2){
        if (input == 'L') {y++;  base = 1;}else
        if (input == 'R') {y--;  base = 3;}else
        if (input == 'G') {x++;  base = 2;}else
                          {x--;  base = 4;}
        } else
        if (base == 3){
        if (input == 'L') {x++;  base = 2;}else
        if (input == 'R') {x--;  base = 4;}else
        if (input == 'G') {y--;  base = 3;}else
                          {y++;  base = 1;}
        } else{
        if (input == 'L') {y--;  base = 3;}else
        if (input == 'R') {y++;  base = 1;}else
        if (input == 'G') {x--;  base = 4;}else
                          {x++;  base = 2;}
        }
    }
    cout << x << ' ' << y;

    return 0;
}




