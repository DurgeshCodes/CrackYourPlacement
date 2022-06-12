#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValidNeighbour(int i,int j,vector<vector<int>> &a){
	if(i>=0 && i<a.size() && j>= 0 && j<a[0].size())
		return true;
	else return false;
}
void gameOfLife(vector<vector<int>> &a){
	vector<int> di = {-1,-1,-1, 0,0, 1,1,1};
	vector<int> dj = {-1, 0, 1,-1,1,-1,0,1};
	int m = a.size(), n = a[0].size();
	for(int i=0;i < m;i++){
		for(int j =0;j < n;j++){
			int live_neighbour = 0;
			for(int k = 0;k<8;k++){
				int ni = i + di[k] , nj = j + dj[k];
				if( isValidNeighbour( ni , nj ,a ) ){
					if(abs(a[ni][nj]) == 1) {
						live_neighbour++;
					}
				}
			}
			int cell = a[i][j];
			if(cell == 0 && live_neighbour == 3) 
				a[i][j] = 2;
			else if(cell == 1 && (live_neighbour < 2 || live_neighbour > 3)) 
				a[i][j] = -1;
		}
	}

	for(int i=0;i < m;i++){
		for(int j =0;j < n;j++){
			if(a[i][j] <= 0) a[i][j] = 0;
			else if(a[i][j] >= 1) a[i][j] = 1;
		}
	}

}
int main(){
	int m,n;
	cin>>m>>n;
	vector<vector<int>> a;
	
	for(int i=0;i<m;i++){
		vector<int> temp;
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			temp.push_back(k);
		}
		a.push_back(temp);
	}

	gameOfLife(a);
	for(auto &e:a){
		for(auto &i:e){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}