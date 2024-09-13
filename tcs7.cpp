#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
	vector<int> arr {1,2,4,5};
	int n = arr.size() + 1;
	int v = 0 ;
	for(int i = 1; i <= n;i++){
		v = v ^ i;
	}
	for(auto e : arr){
		v = v ^ e;
	}
	cout<<v<<endl;
}