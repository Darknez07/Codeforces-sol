#include <iostream>
using namespace std;

void solve(){
    string str;
    cin>>str;
    int l = 0, r = 5, lsum = 0, rsum = 0;
    while(l < r){
        lsum+=(str[l] - '0');
        rsum+=(str[r] - '0');
        ++l,--r;
    }
    cout<<(rsum == lsum ? "YES": "NO")<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}