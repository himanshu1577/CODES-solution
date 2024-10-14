#include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n == 1) return 0;
    int p = (n-1)*n;
    return p/2;
}

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i= 0 ;i<n;i++){
            cin>>arr[i];
            mp[arr[i] - i]++;
        }
        int cnt = 0;
        for(auto e : mp){
            int curr = e.second;
            cnt = cnt + count(curr);
        }
        cout<<cnt<<endl;

    }
    
}