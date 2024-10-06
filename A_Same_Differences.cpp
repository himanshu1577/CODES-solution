#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        int cnt = 0;
        for(int i= 0;i<n;i++){
            int a; cin>>a;
           cnt = cnt +  mp[a - i];
           mp[a- i]++;
        }
		cout<<cnt<<endl;
    }
}