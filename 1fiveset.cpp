#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = a; i<=b; i++)
#define FORD(i, a, b) for (int i = a; i>=b; i--)

#define LL long long
#define INF 1e15
#define N 100001

using namespace std;

LL f[N][6], w[6], a[N];
int n;

LL bf() {
	LL best = -INF;

	FOR(i1,1,n)
	FOR(i2,i1+1,n)
	FOR(i3,i2+1,n)
	FOR(i4,i3+1,n)
	FOR(i5,i4+1,n) {
		LL tmp = w[1] * a[i1] + w[2] * a[i2] + w[3] * a[i3]  + w[4] * a[i4] + w[5] * a[i5];

		if (tmp>best) best = tmp;
	}

	return best;
}

int main() {
	freopen("FIVESET.INP","r",stdin);
	freopen("FIVESET.OUT","w",stdout);
	std::ios::sync_with_stdio(false);

	LL w1, w2;

	cin>>n>>w1>>w2;
	FOR(i,1,n) cin>>a[i];
	w[1] = w1; w[5] = w1;
	w[2] = w2; w[4] = w2;
	w[3] = 1;

	FOR(i,1,n)
		FOR(j,1,5)
			if (i>=j) {
				if (i==j) f[i][j] = -INF;
				else f[i][j] = f[i-1][j] ;

				f[i][j] = max(f[i][j], f[i-1][j-1] + w[j] * a[i]);
			}

	cout<<f[n][5]<<endl;
	//cerr<<f[n][5]<<" "<<bf()<<endl;
	return 0;
}