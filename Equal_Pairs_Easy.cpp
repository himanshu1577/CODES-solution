#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n ; 
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        for(auto e : arr){
            mp[e]++;
        }
        if(n == 1) cout<<0<<endl;
        else if(mp[0] == n ){
            int ans = (n-1)*(n)/2;
            cout<<ans<<endl;

        }
        else if(mp[0] == 0){
             int ans = 0 ;
            for(auto e : mp){
                int g  = e.second;
                ans = ans + (g)*(g-1)/2;
            }
            cout<<ans<<endl;
        }
        else{
            int mini = INT_MIN;
            for(auto a : arr){
                if(mp[a] > mini && a!=0){
                    mini = a ;
                }
            }
            mp[mini] = mp[mini] + mp[0];
            mp[0] = 0;
            int ans = 0 ;
            for(auto e : mp){
                int g  = e.second;
                ans = ans + (g)*(g-1)/2;
            }
            cout<<ans<<endl;
        }
    }

}