#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a,vector<int> &b,int m,int n){
	int i = m-1,j=n-1,k=m+n-1;
	while(i>=0 && j>= 0){
		if(a[i]>= b[j]){
			a[k] = a[i];
			i--;
			k--;
		}
		else if(a[i] < b[j]){
			a[k] = b[j];
			j--;
			k--;
		}
	}
	while(i>=0){
		a[k] = a[i];
		i--;k--;
	}
	while(j>=0){
		a[k] = b[j];
		j--;k--;
	}
}

int main(){
	int n,m;
	cin>>m>>n;
	vector<int> a,b;
		for(int j=0;j<m;j++){
			int k;cin>>k;
			a.push_back(k);		
		}
		for(int j=0;j<n;j++){
			int k;cin>>k;
			b.push_back(k);		
		}

		for(int i=0;i<n;i++){
			a.push_back(0);
		}
		merge(a,b,m,n);
		for(int i=0;i<m+n;i++){
			cout<<a[i]<<" ";
		}
		return 0;
}