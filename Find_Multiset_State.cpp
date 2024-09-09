#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        for(int i = 0 ;i<k;i++){
            int m = arr[arr.size()-1];
            arr.pop_back();
            int curr = arr[i] + m;
            arr.push_back(curr);
        }
        vector<int> ans(arr.begin() + k,arr.end());
        for(auto e : ans){
            cout<<e<<" ";
        }
        cout<<endl;
        
    }
}