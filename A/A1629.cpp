#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k;
void solve(){
    cin>>n>>k;
    vector<pair<int,int> > v(n,{0,0});
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i].first > k)
            break;
        k+=v[i].second;
    }
    cout<<k<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}