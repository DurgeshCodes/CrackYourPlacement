#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isValid(string &s,int i,int j){
        while(i<j){
            if(s[i] == s[j]){
                i++;j--;
            }
            else return false;
        }
        return true;
}
void validPalindrome(string &s){
    while(i<j){
            if(s[i] == s[j]){
                i++;j--;
            }
            else return (isValid(s,i+1,j) || isValid(s,i,j+1));
        }
        return true;
}
int main(){
	string s;
	cin>>s;
	validPalindrome(s);
	return 0;
}