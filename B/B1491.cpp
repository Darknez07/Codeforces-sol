#include <iostream>
#include <set>
#include <vector>
using namespace std;
void solve(){
    int n,u,v,x,ans = INT_MAX;
    cin>>n>>u>>v;
    set<int> s;
    vector<int> vec(n + 1, 0);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
        if(s.count(vec[i]))
            ans = v + min(u, v);
        s.insert(vec[i]);
    }
    for(int i=1;i<=(n - 1);i++){
        if(abs(vec[i] - vec[i + 1]) == 1){
            ans = min(ans, min(v,u));
        }
        // If we see the below case we are in luck;
        // Because a diff of 2 means
        /* .O.....
           ...O...
           Make the way
        */
        if(abs(vec[i] - vec[i + 1]) >= 2){
            cout<<0<<endl;
            return;
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