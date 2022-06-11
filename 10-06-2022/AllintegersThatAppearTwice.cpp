#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> integersThatAppearTwice(vector<int> &a){
	int n = a.size();
	vector<int> res;
	for(int i=0;i<n;i++){
		int temp = abs(a[i]);
		if( a[ temp - 1 ] < 0 ) res.push_back(abs(a[ temp - 1 ]));
		else a[temp - 1] = -a[temp  - 1];

	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	auto res = integersThatAppearTwice(a);
	for(auto &e: res) cout<<e<<endl;
	return 0;
}