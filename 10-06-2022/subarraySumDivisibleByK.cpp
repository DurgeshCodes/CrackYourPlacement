#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraySumDivisibleByK(vector<int> &a,int k){
	int res=0;
	unordered_map<int,int> m;
	int n = a.size();
	int sum = 0;
	m.insert({0,1});
	for(int i=0;i<n;i++){
		sum += a[i];
		int req = sum % k;
		req = req < 0 ? req + k : req;
		if(m.find(req) != m.end()){
			res += m[req];
		} 
		m[req]++;
	}
	return res;
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	cout<<subarraySumDivisibleByK(a,k);
	return 0;
}