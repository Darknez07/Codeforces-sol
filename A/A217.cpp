#include <iostream>
#include <vector>
using namespace std;
int x[101],y[101],ver[101],n,ans;
void dfs(int a){
    ver[a] = 1;
    for(int i=1;i<=n;i++) if((x[i] == x[a] || y[i] == y[a]) && !ver[i]) dfs(i);
}
int main(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>x[i]>>y[i];
    ans = -1;
    for(int i=1; i<=n; i++) if(!ver[i]) dfs(i),ans++;
    cout<<ans<<endl;
    return 0;
}