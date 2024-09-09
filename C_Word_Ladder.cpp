#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n = s.length();
    vector<string> ans;
    if(s == t) cout<<"0"<<endl;
    else{
        for(int i = 0 ;i < n ;i++){
            if(s[i] != t[i]){
                s[i] = t[i];
                ans.push_back(s);
            }
        }
        for(auto e : ans){
            cout<<e<<endl;
        }
    }
    

}