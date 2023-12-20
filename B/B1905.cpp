#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int leaves;
void dfs(int start){
    if(vis[start]) return;
    vis[start] = true;
    if(adj[start].size() == 1) leaves++;
    for(auto node: adj[start]){
        dfs(node);
    }
    return;
}

void solve(){
    int n,from,to;
    cin>>n;
    adj.assign((n+1),vector<int> ());
    vis.assign(n+1,false);
    leaves = 0;
    for(int i=1;i<n;i++){
        cin>>from>>to;
        adj[from].push_back(to);
        adj[to].push_back(from);
    }
    dfs(1);
    cout<<(leaves + 1)/2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}