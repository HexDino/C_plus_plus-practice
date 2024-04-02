#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int i,j=0;
	vector<int> c;
	getline(cin,s1);
	getline(cin,s2);
	for(i=0;i<s1.length();i++) 
	{
		if(s1[i]>='A'&&s1[j]<='Z') s1[i]=s1[i]+32;
	}
	for(i=0;i<s2.length();i++) 
	{
		if(s2[i]>='A'&&s2[j]<='Z') s2[i]=s2[i]+32;
	}
	if(s1.find(s2)==-1)
	{
	    cout<<"-1";
	    return 0;
	}
	for(i=0;i<s1.find(s2);i++) cout<<i<<" ";
	for(i=s1.find(s2)+s2.length();i<s1.length();i++) cout<<i<<" ";
	return 0;
}
