#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n,val;
void solve(){
    cin>>n;
    int ans = INT_MAX;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>val;
        if(m.find(val)!=m.end()){
            ans = min(ans, i + 1 - m[val]);
            m[val] = i + 1;
        }else{
            m[val] = i + 1;
        }
    }
    if(ans == INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<(ans + 1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
