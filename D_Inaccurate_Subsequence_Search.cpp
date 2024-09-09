#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i = 0;i<m;i++) cin>>b[i];
        int cnt = 0;
        for(int i = 0 ;i<=(n-m);i++){
            set<int> st(b.begin(),b.end());
            for(int j = i;j<i+k;j++){
                st.insert(a[j]);
            }
            if(st.size() <= (2*m - k)){
                cnt++;
            }
            st.clear();
        }
        cout<<cnt<<endl;

    }
}