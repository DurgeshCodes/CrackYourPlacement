#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string generateSpaces(int totalSpace,int wordCount){
    int spaceCount = totalSpace/wordCount;
    string spaces = "";
    if(spaceCount == 0) spaces = " ";
    else{
        while(spaceCount){
            spaces += " ";
            spaceCount--;
        }
    }
    return spaces;
}

vector<string> fullJustify(vector<string>& a, int k) {
        int i=0,j=0;
        int lnth = 0;
        vector<string> res;
        int n = a.size();
        while(j < n){
            int m = a[j].length();
            lnth = lnth + m;
            int wordCount = j-i+1;
            if(lnth + wordCount - 1 < k) j++;
            else if(lnth + wordCount - 1 > k){
                j--;
                string spaces = generateSpaces(lnth-m,j-i+1);
                string temp = "";
                while(i < j){
                    temp += a[i] + spaces;
                    i++;
                }
                temp+=a[i];
                res.push_back(temp);
                i++;j++;
            }
        }
        return res;
    }

int main(){
    int n,k;
    cin>>n>>k;
    vector<string> a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    auto res = fullJustify(a,k);
    for(auto &e: res){
        cout<<e<<endl;
    }
    return 0;
}