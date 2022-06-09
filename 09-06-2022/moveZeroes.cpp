#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxProfit(vector<int>& a) {
        int mn = INT_MAX,profit = INT_MIN;
        for(auto &e:a){
            if(e<mn) mn = e;
            profit = max(profit,e-mn);
        }
        return profit == INT_MIN ? 0 : profit;
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