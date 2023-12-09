#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#define ll long long

ll curr;
vector<bool> reachables;
vector<ll> cost;
vector<vector<ll>> connects;
ll ans = 0;
void dfs(ll node){
    reachables[node] = true;
    curr = min(curr, cost[node]);
    for(auto nodes: connects[node]){
        if(!reachables[nodes]) dfs(nodes);
    }
}

int main(){
    ll n,m,from,to;
    cin>>n>>m;
    cost.assign(n + 1, 0);
    for(int i=1;i<=n;i++) cin>>cost[i];
    if(m == 0){
        cout<<accumulate(cost.begin(),cost.end(),(ll)0)<<endl;
        return 0;
    }
    connects.assign(n + 1,{});
    for(int i=1;i<=m;i++){
        cin>>from>>to;
        connects[from].push_back(to);
        connects[to].push_back(from);
    }
    reachables.assign(n + 1, false);
    for(int i=1;i<=n;i++){
        if(!reachables[i]){
            curr = INT_MAX;
            dfs(i);
            ans+=curr;
        }
    }
    cout<<ans<<endl;
    return 0;
}