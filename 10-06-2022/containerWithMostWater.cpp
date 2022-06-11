#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 int containerWithMostWater(int &a){
 	int i=0,j=a.size()-1;
 	int area = 0;
 	while(i<j){
 		int mn = min(a[i],a[j]);
 		int temp = (j-i)*mn;
 		
 	}
 }

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	auto res = containerWithMostWater(a);
	for(auto &e: res) cout<<e<<endl;
	return 0;
}