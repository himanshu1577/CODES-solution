#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
	vector<int> arr {12,23,12,23,44,11,44,66};
	int n = arr.size();
	int orr = 0;
	for(auto e : arr){
		orr = orr^e;
	}
	int rsbm = orr & -orr;
	int x = 0;
	int y = 0;
	for(auto e : arr){
		if((rsbm & e) == 0){
			x = x ^ e;
		}
		else{
			y = y ^ e;
		}
	}
	cout<<x<<" "<<y;
	
}