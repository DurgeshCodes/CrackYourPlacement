#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> &a){
	int n = a.size();
	int major = 0,count = 0;
	for(int i = 0;i < n;i++){
		if(count){
			if(a[i] == a[major]) count++;
			else count--;
		}
		else{
			major = i;
			count++;
		}
	}
	return a[major];
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a.push_back(k);
	}

	cout<<majority(a);
	
}