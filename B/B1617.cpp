#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n,a,b,c;
    cin>>n;
    if(n % 2 == 0){
        cout<<2<<" "<<(n - 1) - 2<<" "<<1<<endl;
    }else{
        a = (n - 1)/2;
        if(a % 2 == 0) cout<<a + 1<<" "<<a - 1<<" "<<1<<endl;
        else cout<<a - 2<<" "<<a + 2<<" "<<1<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}