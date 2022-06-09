#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void sortColors(vector<int>& a) {
        int i=0,j=0,k=a.size()-1;
        while(j<=k){
            if(a[j]==0)
            {
                swap(a[i],a[j]);
                i++;
                j++;
            }
            else if(a[j]==2){
                swap(a[j],a[k]);
                k--;
            }
            else j++;
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
	sortColors(a);
	return 0;
}