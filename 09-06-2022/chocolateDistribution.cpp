#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> twoSum(vector<int>& a, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++){
            int req = k-a[i];
            if(m.find(req) != m.end()) return {m[req],i};
            else {
                m.insert({a[i],i});
            }
        }
        return {};
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
	auto res = twoSum(a);
	for(auto &e:res) cout<<e<<" ";
	return 0;
}