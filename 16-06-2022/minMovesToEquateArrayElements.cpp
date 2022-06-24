#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int minMoves(vector<int>& nums) {
        int mn = INT_MAX,sum=0,n = nums.size();
        for(auto &e:nums){
            if(mn > e) mn = e;
            sum += e;
        }
        return sum - n*mn;
    }

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		a.push_back(k);
	}
	cout<<minMoves(a);
	return 0;
}