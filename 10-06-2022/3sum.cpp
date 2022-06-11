#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &a){
	int n = a.size();
 	sort(a.begin(),a.end());
 	vector<vector<int>> res;
 	for( int i=0 ;i < n; i++){
 		int req = -a[i];
 		int front = i+1;
 		int back = n-1;
 		while(front < back){
 			int sum = a[front] + a[back];
 			if(sum < req)
 				front++;
 			else if(sum > req)
 				back--;
 			else {
 				vector<int> temp = {a[i],a[front],a[back]};
 				res.push_back(temp);
 				while(front < n && a[front]==temp[1]) front++;
 				while(back >= 0 &&  a[back]==temp[2])  back--;
 			} 
 		}
 		while(i + 1 < n && a[i+1] == a[i] ) i++;
 	}
 	return res;
 }

int main(){
	int n,k;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	auto res = threeSum(a);
	for(auto &e : res){
		for(auto &i : e){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}