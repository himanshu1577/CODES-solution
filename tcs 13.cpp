#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 11;
	int n1 = n;
	int count = 0;
	while(n1>0){
		count++;
		n1>>=1;
	}
	int sum = pow(2,count) - 1;
	int res = sum^n;
	cout<<res;
}