#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string huns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thns[] = {"","M","MM","MMM","MMMM"};
        
        return thns[num/1000] + huns[(num%1000)/100] + tens[(num%100)/10] + ones[(num%10)]; 
    }
int main(){
	int n;
	cin>>n;
	cout<<intToRoman(n);
	return 0;
}