#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
	vector<string> arr {"tcsdigital","tcsninja","tcsprime"};
	int n = arr.size();
	sort(arr.begin(),arr.end());
	string ans = "";
	bool flag = true;
	for(int i = 0 ; i < arr[0].size() ; i++){
		for(int j = 1;j<n;j++){
			if(arr[0][i] != arr[j][i] ){
				flag = false;
				break;
			}	
		}
		if(flag)
		ans = ans + arr[0][i];
		else break;
	}
	cout<<ans<<endl;
}