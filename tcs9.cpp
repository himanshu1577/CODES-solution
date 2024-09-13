#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int check(int n){
	int cnt = 0;
	for(int i = 2 ; i*i <= n ; i++){
		if(n%i == 0){
			cnt = cnt + i ;
			if(i != n/i) cnt = cnt + n/i;
		}
	}
	if(cnt == n) return 1;
	else return 0;
}
int main(){
	int n ;
	cin>>n;
	cout<<check(n)<<endl;
}