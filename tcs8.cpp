#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void find(vector<int> &nums, vector<int> &ans){
	stack<int> st;
	int n = nums.size();
	for(int i = n-1 ;i >= 0 ; i--){
		while(!st.empty() && nums[i] < st.top()){
			st.pop();
		}
		if(st.empty())
		ans[i] = -1;
		else ans[i] = st.top();
		st.push(nums[i]);
	}
}
int main(){
	vector<int> arr {4,2,7,8,5,3,1,2};
	int n = arr.size();
	vector<int> ans(n);
	find(arr,ans);
	for(auto e : ans){
		cout<<e<<" ";
	}
	
	
}