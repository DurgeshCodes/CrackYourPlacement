#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxProfit(vector<int>& a) {
        int res = 0;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]) res+=a[i]-a[i-1];
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
	cout<<maxProfit(a);
	return 0;
}