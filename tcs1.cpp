#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
	vector<int> arr = {2,2,2,1,7,5,3};
	set<pair<int,int>> st;
	int cnt = 0;
	int n = arr.size();
	for(int i = 0;i<n;i++){
		for(int j = i + 1;j<n;j++){
			if((arr[i] + arr[j]) % 2 == 0 ){
			st.insert({arr[i],arr[j]});
			cnt++;
			}
		}
	}
	int res = st.size();
	for(auto e : st){
		cout<<e.first<<" "<<e.second<<endl;
	}
	cout<<cnt<<endl;
	cout<<res<<endl;
}