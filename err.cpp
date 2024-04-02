#include <bits/stdc++.h>
using namespace std;
int n,i,j,F[100002];
vector <int> A[100002];
int main()
{
    freopen("err.inp","r",stdin);
    freopen("err.out","w",stdout);
    int n=0;string s;cin>>s;
    while (s!=".")
    {
        n++;
        if (s=="RADI")
            A[n].push_back(n+1);
        if (s=="IDI")
        {
            int x;cin>>x;
            A[n].push_back(x);
        }
        cin>>s;
        if (s=="ILI")
        {
            int x;cin>>x;
            A[n].push_back(x);
            cin>>s;
        }
    }
    memset(F,0,sizeof(F));
    queue<int> q;
    q.push(1);F[1]=1;
    while (!q.empty())
    {
        int k=q.front();q.pop();
        for (i=0;i<A[k].size();i++)
            if (F[A[k][i]]==0)
        {
            F[A[k][i]]=1;
            q.push(A[k][i]);
        }
    }
    int res=0;
    for(i=1;i<=n;i++)
       if (F[i]==0) res++;
    cout<<res;
}
