#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> d(n,0);
    for(auto &i: d) cin>>i;
    vector<int> v(n,0);
    v[0] = d[0];
    for(int i=1;i<n;i++){
        if(v[i - 1] >= d[i] && (v[i - 1] - d[i]) != (v[i - 1] + d[i])){
            cout<<-1<<endl;
            return;
        }
        v[i] = v[i - 1] + d[i];
    }
    for(auto x: v) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}