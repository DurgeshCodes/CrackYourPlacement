#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    long long res=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i+m-1<n;i++){
     res =  min(res,a[i+m-1]-a[i]);
    }
    
    return res;
    
    }

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a.push_back(k);
	}
	cout<<findMinDiff(a);
	return 0;
}