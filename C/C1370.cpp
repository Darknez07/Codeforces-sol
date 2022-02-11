#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    if(n == 1){cout<<"FastestFinger"<<endl;return;}
    if(n%2 || n == 2){
        cout<<"Ashishgup"<<endl;
        return;
    }
    for(int i=3;i<=sqrt(n);i++){
        if(n % i == 0){
            if(i % 2 != (n/i)%2){
                cout<<"Ashishgup"<<endl;
                return;
            }
        }
    }
    cout<<"FastestFinger"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}