#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr,int n){
	int k = n/3;
	map<int,int> mp;
	for(int i = 0 ;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto e  : mp){
		if(e.second > k)
			return e.first;
	}
	return 1;
}
int main(){
	vector<int> arr = {1,1,2,2,3,3,7,7,7,7,7,7};
	int n  = arr.size();
	int ans = solve(arr,n);
	cout<<ans<<n - 'a';
}