#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 int maxPointsFromCards(vector<int> &a,int k){
 	int n = a.size();
 	int sum = 0;
 	for(int i=0;i<k;i++){
 		sum += a[i];
 	}
 	int mx = sum;
 	for(int i = k-1;i>=0;i--){
 		sum = sum - a[i] + a[n+i-k]; 
 		mx = max(mx,sum);
 	}
 	return mx;
 }

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	int res = maxPointsFromCards(a,k);
	cout<<res;
	return 0;
}