#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int m = 4;
        char arr[n][4];
        for(int i = 0 ;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        vector<int> ans;
        for(int i = n-1;i >= 0 ;i--){
            for(int j = 0 ; j< m;j++){
                if(arr[i][j] == '#')
                ans.push_back(j+1);
            }
        }
        for(auto e : ans){
            cout<<e<<" ";
        }
        cout<<endl;

    }
}