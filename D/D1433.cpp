#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int t,n,idx;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        vector<pair<ll,ll> > res;
        for(int i=0; i<n; i++) cin>>v[i];
        idx = -1;
        for(int i=1;i<n;i++){
            if(v[0]!= v[i]){
                idx = i;
                res.push_back({1, i + 1});
            }
        }
        if(idx == -1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(v[i] == v[0])
                res.push_back({idx + 1, i+ 1});
        }
        cout<<"YES"<<endl;
        for(auto x: res) cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}