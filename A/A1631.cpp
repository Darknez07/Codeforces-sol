#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n,ami = 0,bmi = 0;
    cin>>n;
    vector<int> a(n, 0),b(n, 0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[ami] < a[i])
            ami = i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[bmi] < b[i])
            bmi = i;
    }
    if(b[bmi] > a[ami]){
        for(int i=0;i<n;i++){
            if(b[i] < a[i])
                swap(b[i],a[i]);
        }
    }else{
        for(int i=0;i<n;i++){
            if(a[i] < b[i])
                swap(a[i],b[i]);
        }
    }
    int am = *max_element(a.begin(),a.end());
    int bm = *max_element(b.begin(),b.end());
    cout<<am*bm<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}