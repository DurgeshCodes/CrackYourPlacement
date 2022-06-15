#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(string &s) {
        s.push_back('+');
        int num = 0;
        char opr = '+';
        stack<int> st;
        for(auto &c: s){
            if(isdigit(c)){
                num = num*10 + (c - '0');
            }
            else if( !isdigit(c) && c != ' '){
                if(opr == '+'){
                    st.push( num );
                }
                else if(opr == '-'){
                    st.push( -num );
                }
                else if(opr == '*'){
                    int top = st.top();
                    st.pop();
                    num = num * top;
                    st.push(num);
                }
                else if(opr == '/'){
                    int top = st.top();
                    st.pop();
                    num =  top / num;
                    st.push(num);
                }
                num = 0;
                opr = c;
            }
        }
        
        int res =0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }


int main(){
    string s;
    cin>>s;
    cout<<calculate(s);

    return 0;
}