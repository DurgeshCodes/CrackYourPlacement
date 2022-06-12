#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &a){
	int n = a.size();
	int maxReach = 0;
	for(int i=0;i<n && i< maxReach;i++){
		maxReach = max(maxReach,i+a[i]);
		if(maxReach >= n) return true;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	vector<int> a;
		for(int j=0;j<n;j++){
			int k;cin>>k;
			a.push_back(k);		
		}
		cout<<canJump(a);
		return 0;
}