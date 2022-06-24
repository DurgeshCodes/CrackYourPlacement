#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string Three(int &k){
	if(k == 0) return "";
	unordered_map<int,string> units = {{1,"One"},{2,"Two"},{3,"Three"},{4,"Four"},{5,"Five"},{6,"Six"},{7,"Seven"},{8,"Eight"},{9,"Nine"}};
	unordered_map<int,string> tens = {{1,"Ten"},{2,"Twenty"},{3,"Thirty"},{4,"Forty"},{5,"Fifty"},{6,"Sixty"},{7,"Seventy"},{8,"Eighty"},{9,"Ninety"}};
	unordered_map<int,string> elevens = {{11,"Eleven"},{12,"Twelve"},{13,"Thirteen"},{14,"Fourteen"},{15,"Fifteen"},{16,"Sixteen"},{17,"Seventeen"},{18,"Eighteen"},{19,"Ninteen"},{20,"Twenty"}};
	string res = "";


			int hundredth = k/100;
			if(hundredth != 0)
				res += units[hundredth] + " Hundred";
			int tenth = k%100;
			if(tenth >10 && tenth<20){
				if(res != "")
					res+= " ";
				res+= elevens[tenth];

			}
			
			else if(tenth >= 20 || tenth <= 10){
				tenth /=10;
			if(tenth != 0){
				if(res != "")
					res+= " ";
				res += tens[tenth];
			}
			
			int one = k%10;
			if(one != 0)
				if(res != "")
					res+= " ";
				res += units[one];
			}
			
		return res;
}

string numberToWords(int n){
	vector<string> places = {"","Thousand","Million","Billion"};
	string res = "";
	if(n<1000)
		return Three(n);
	else{
		int count = 0;
		while(n){
			int k = n % 1000;
			string temp = Three(k);
			if(temp != "")
				res = temp + " "+ places[count] + " " + res;
			count++;
			n/= 1000;
		}
	}

	return res;
}
int main()
{
	int n;
	n = 0;
	while(n!= -1){
		cin>>n;
	cout<<numberToWords(n);
	cout<<endl;
	}
	
	return 0;
}