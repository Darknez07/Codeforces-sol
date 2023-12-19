#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n,x,m,loc = -1;
    cin>>n>>x>>m;
    vector<pair<int,int> > v(m,{0,0});
    for(int i=0;i<m;i++) cin>>v[i].first>>v[i].second;
    for(int i=0;i<m;i++){
        if(v[i].first == 1 && v[i].second == n){
            cout<<n<<endl;
            return;
        }
        if(x >= v[i].first && v[i].second >= x){
            loc = i;
            break;
        }
    }
    if(loc == -1){
        cout<<1<<endl;
        return;
    }
    int l = v[loc].first, r = v[loc].second;
    ll ans = r - l + 1;
    if(loc == n - 1){
        cout<<ans<<endl;
        return;
    }
    for(int i = loc + 1;i<m;i++){
        if(v[i].first <= l && v[i].second >= r){
            ans+=(abs(v[i].first - l) + abs(v[i].second - r));
            l = v[i].first, r = v[i].second;
            continue;
        }
        if(v[i].first >= l && v[i].first <= r && v[i].second >= r){
            ans+=(abs(v[i].second - r));
            r = v[i].second;
        }
        if(v[i].second >= l && v[i].second <= r && v[i].first <= l){
            ans+=(abs(v[i].first - l));
            l = v[i].first;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}