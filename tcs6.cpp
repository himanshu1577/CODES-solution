#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
	vector<int> arr1 {1,2,3,4,6};
	vector<int> arr2 {2,3,5};
	set<int>st (arr1.begin(),arr1.end());
	for(auto a : arr2){
		st.insert(a);
	}
	for(auto e : st){
		cout<<e<<" ";
	}
	
}