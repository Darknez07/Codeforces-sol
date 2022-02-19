#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    int y = -1,x = -1;
    for(int i=0;i<n;i++){
        if(v[i] % 2 == 0){
        if(v[i] < y){
            cout<<"No"<<endl;
            return;
        }
        y = v[i];
        }else{
            if(v[i] < x){
                cout<<"No"<<endl;
                return;
            }
            x = v[i];
        }
    }
    cout<<"Yes"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}