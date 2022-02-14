#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    int l = 0,r = n - 1,ate = 0,moves = 0,prev = 0,a = 0,b = 0;
    while(l <= r){
        ate = 0;
        while(l <= r && ate <= prev){ate+=v[l];l++;}
        moves++;
        a+=ate;
        if(ate <= prev)
            break;
        if(l > r)
            break;
        prev = ate;
        ate = 0;
        while(l <= r && ate <= prev){ate+=v[r];r--;}
        b+=ate;
        moves++;
        if(ate <= prev)
            break;
        prev = ate;
    }
    cout<<moves<<" "<<a<<" "<<b<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}