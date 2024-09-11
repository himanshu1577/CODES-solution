#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> inside(n);
    vector<int> outside(n);
    for(int i =0 ;i<n;i++){
        cin>>inside[i];
    }
    for(int i = 0;i<n;i++){
        cin>>outside[i];
    }
    int ans = INT_MIN;
    for(int i =0 ;i<n;i++){
        if(i == 0){
            ans = max(ans,inside[i] - outside[i]);
        }
        else{
            int t = ans + inside[i];
            ans = max(ans,inside[i] - outside[i]);
        }
    }
    cout<<ans<<endl;
}