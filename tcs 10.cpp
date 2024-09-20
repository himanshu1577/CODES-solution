#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
	string s; getline(cin,s);
	int n = s.length();
	string ans = "";
	for(int i = 0 ;i<n;i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
			continue;
		}
		else{
			ans = ans + s[i];
		}
	}
		
	
	cout<<ans<<endl;
}