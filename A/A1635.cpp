#include <iostream>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    ll val,ans = -1;
    for(int i=0;i<n;i++){
        cin>>val;
        if(ans == -1){
            ans = val;
        }else{
            ans|=val;
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}