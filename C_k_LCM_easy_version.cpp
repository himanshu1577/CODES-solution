#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n % 3 == 0){
            cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
        }
        else {
            if(n&1){
                cout<<(n-1)/2<<" "<<(n-1)/2<<" "<<1<<endl;
            }
            else{
                int p = (n-2)/2;
                if(p % 2 == 0){
                    cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
                }
                else{
                    cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
                }
            }
        }
    }
}