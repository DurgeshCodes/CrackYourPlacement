#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void duplicates(string &s){
    unordered_map<char,int> m;
    for(char &ch: s){
        m[ch]++;
    }
    for(auto &it: m){
        if(it.second > 1)
            cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
	string s;
	cin>>s;
	duplicates(s);
	return 0;
}