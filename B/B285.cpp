#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n,s,t,r,ans = 0;
    cin>>n>>s>>t;
    vector<int> v(n + 1, 0);
    vector<bool> vis(n + 1, false);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        r = q.front();
        if(r == t) break;
        if(vis[r]){ans = -1; break;}
        vis[r] = true;
        ans++;
        q.pop();
        q.push(v[r]);
    }
    cout<<ans<<endl;
    return 0;
}