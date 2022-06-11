#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int SubarrayWithSumK(vector<int> &a,int k){
 	unordered_map<int,int> m;
 	int sum = 0;
 	int res = 0;
 	m.insert({0,1});
 	for(auto &e : a){
 		sum += e;
 		if(m.find(sum - k) != m.end() )
 			res += m[sum - k];
 		m[sum]++;
 	}
 	return res;
 }

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	int res = SubarrayWithSumK(a,k);
	cout<<res;
	return 0;
}