#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {12,2,2,5};
    int n = arr.size();
    int sum = 0;
    multiset<int> ms(arr.begin(),arr.end());
    for(int i = 0 ; i < n-1 ;i++){
        int p = *ms.begin() ;
        ms.erase(ms.begin());
        int p1 = *ms.begin();
        sum = sum + p + p1;
       if(!ms.empty()) ms.erase(ms.begin());
        ms.insert(p+p1);
    }
    cout<<sum<<" ";
}