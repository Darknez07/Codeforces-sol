#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    int mx = -1,indx = -1;
    for(int i=1;i<n;i++){
        if(v[i] >= v[i - 1])
            continue;
        indx = i;
        break;
    }
    if(indx == -1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}