#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void moveZeroes(vector<int>& a) {
        int i=0,j=0;
        while(i<a.size()){
            if(a[i]!=0) {
                swap(a[i],a[j]);
                j++;
            }
            i++;
        }
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
	moveZeroes(a);
	return 0;
}