#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void solve(){
    int n,k,avi;
    cin>>n>>k;
    vector<pair<int,int>> b(n, {0,0});
    for(int i=0;i<n;i++)
        cin>>b[i].first;
    for(int i=0;i<n;i++)
        cin>>b[i].second;
    sort(b.begin(),b.end(),[](pair<int,int> a,pair<int,int> b){
        return b.second < a.second;
    });
    int coins = 0;
    for(int i=0;i<n;i++){
        avi = ceil(log2(b[i].first));
        if((k - avi) < 0)
            break;
        k-=avi;
        coins+=b[i].second;
    }
    cout<<coins<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}