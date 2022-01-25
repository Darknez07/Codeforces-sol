#include <iostream>
#include <vector>
using namespace std;
int n;
void solve(){
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(abs(v[i] - v[i - 1]) >= 2){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}