#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    if(n % 2 || n < 4){
        cout<<-1<<endl;
        return;
    }
    cout<<n/6+ (n % 6 ? 1: 0)<<" "<<n/4<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}