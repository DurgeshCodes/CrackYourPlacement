#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxValueOfEquation(vector<vector<int>> &a,int k){
	priority_queue<pair<int,int>> q;
        int ans = INT_MIN;
        for(auto &e:a){
            int x = e[0],y = e[1];
            while( !q.empty() && x - q.top().second > k) q.pop();
            if(!q.empty())
                ans = max(ans,x + y + q.top().first);           
            q.push({y - x, x});
        }
        
        return ans == INT_MIN ? 0 : ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int>> a;
	for(int i=0;i<n;i++){
		   vector<int> temp;
		for(int j=0;j<2;j++){
			int k;
			cin>>k;
			temp.push_back(k);
		}
		a.push_back(temp);
	}

	cout<<maxValueOfEquation(a,k);
	return 0;
}