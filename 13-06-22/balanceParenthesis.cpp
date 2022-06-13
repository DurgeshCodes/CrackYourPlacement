#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool balanceParenthesis(string &s){
	unordered_map<char,int> m = {{'(',1},{'[',2},{'{',3},{')',-1},{']',-2},{'}',-3}};
        stack<int> st;
        for(auto &c : s){
            if(m[c] > 0){
                st.push(c);
            }
            else {
                if(st.empty()) return false;
                int temp = st.top();
                st.pop();
                if(m[temp] + m[c] != 0) return false; 
            }
        }
        return st.empty();
}
int main(){
	string s;
	cin>>s;
	cout<<balanceParenthesis(s);
	return 0;
}