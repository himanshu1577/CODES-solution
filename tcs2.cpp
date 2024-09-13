#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
	vector<int> arr{4,5,0,1,9,0,5,0};
	int n = arr.size();
	int cnt = 0 ;
	for(auto e : arr){
		if(e == 0) cnt++;
	}
	vector<int> ans(n,0);
	int j = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] != 0){
			ans[j] = arr[i];
			j++;
		}
	}
	for(auto e : ans){
		cout<<e<<" ";
	}
}