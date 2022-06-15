#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 more optimised approach is to reverse whole string then reverse each word
*/
string reverseWords(string s) {
    stack<string> st;
    string word = "";
    for(auto &c:s){
        if(c != ' '){
            word.push_back(c);
        }
        else if(c==' '){
            st.push(word);
            word = "";
        }
    }
    st.push(word);
    
    string res = "";
    while(!st.empty()){
        if(st.top() != "")
        res = res + st.top() + " ";
        st.pop();
    }
    res.pop_back();
    
    return res;
}

int main(){
	int n;
	cin>>n;
    string s = "";
	generate(s,n,n);
	return 0;
}