#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 int containerWithMostWater(vector<int> &a){
 	int i=0,j=a.size()-1;
 	int area = 0;
 	while(i<j){
 		int mn = min(a[i],a[j]);
 		int temp = (j-i)*mn;
 		area = max(area,temp);
 		if(a[i]==mn) i++;
 		else j--;
 	}
 	return area;
 }

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	int res = containerWithMostWater(a);
	cout<<res;
	return 0;
}