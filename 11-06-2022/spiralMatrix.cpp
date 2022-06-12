#include<iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> spiral(vector<vector<int>> &a){
	int m = a.size()-1;
	int n = a[0].size()-1;
	vector<int> res;
	int count = 0,req = (m+1)*(n+1);
	int top = 0,bottom = m,left = 0,right = n;
	while(top<=bottom && left<=right){
		for(int i=left;i<=right && count < req;i++){
			res.push_back(a[top][i]);
			count++;
		}
		top++;
		for(int i = top;i<= bottom && count < req;i++){
			res.push_back(a[i][right]);
			count++;
		}
		right--;
		for(int i=right;i>=left && count < req;i--){
			res.push_back(a[bottom][i]);
			count++;
		}
		bottom--;
		for(int i=bottom;i>=top && count < req;i--){
			res.push_back(a[i][left]);
			count++;
		}
		left++;
		}

		return res;
}

int main(){
	int m,n;
	cin>>m>>n;
	vector<vector<int>> a;

	for(int i=0;i<m;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			int k;cin>>k;
			v.push_back(k);
		}
		a.push_back(v);
	}

	vector<int> res = spiral(a);
	for(auto &e: res) cout<<e<<" ";
	return 0;
}