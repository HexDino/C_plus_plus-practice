#include<bits/stdc++.h>
using namespace std;
int r,c,res=0;
char a[25][25];
int R[4]={0,0,-1,1};
int C[4]={-1,1,0,0};
bool col[27];
bool check(int x, int y){
    return (0<x && x<=r && 0<y && y<=c && !col[a[x][y]-'A']);
}
void dfs(int i, int j, int val){
    col[a[i][j]-'A']=1;
    res=max(res,val);
    for(int t=0;t<4;++t){
        int x=i+R[t],y=j+C[t];
        if (!check(x,y)) continue;
        dfs(x,y,val+1);
    }
    col[a[i][j]-'A']=0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("letters.inp","r",stdin);
    freopen("letters.out","w",stdout);
    cin>>r>>c;
    for(int i=1;i<=r;++i)
        for(int j=1;j<=c;++j)
            cin>>a[i][j];
    dfs(1,1,1);
    cout<<res;
}
