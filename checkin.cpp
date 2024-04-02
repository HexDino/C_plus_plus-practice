#include <iostream>
#include <cstdio>
using namespace std;
int a[300001],m,n;
int main(){
	freopen("CHECKIN.INP","r",stdin);
	freopen("CHECKIN.OUT","w",stdout);
	cin >> n >> m;
	long long lo = 0, hi = 0;
	for(int i=0; i < n; i++) {
		cin >> a[i];
		if (hi < a[i])
			hi = a[i];
	}
	hi *= m;
	long long mid,kol;
	while( lo < hi ){
		mid = (lo+hi)/2;
		kol = 0;
		for(int i=0; i<n; i++)
			kol += mid / a[i];
		if( kol < m ) lo = mid+1;
		else hi = mid;
	}
	cout << lo;
	return 0;
}
