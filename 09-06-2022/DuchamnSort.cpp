#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& a) {
        int mx = a[a.size()-1];
        int mn = 0;
        int i=0;
        while(i<a.size()){
            if(a[i]==a[mn])i++;
            else if(a[i]>a[mn]){
                mn++;
                a[mn]=a[i];
            }
            if(a[mn]==mx) break;
        }
        
        return mn+1;
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
	removeDuplicates(a);
	return 0;
}