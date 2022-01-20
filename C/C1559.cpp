#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <unordered_set>
using namespace std;
int t,n,v;
void solve(){
    cin>>n;
    int mx;
    map<int, set<int> > m;
    for(int i=1;i<n;i++)
        m[i].insert(i + 1);
    for(int i=0;i<n;i++){
        cin>>v;
        if(v == 0)
            m[i + 1].insert(n + 1);
        else
            m[n + 1].insert(i + 1);
    }
    if(m[n].count(n + 1)){
        for(int i=1;i<=(n + 1);i++)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    if(m[n+1].count(1)){
        cout<<(n+1)<<" "<<1<<" ";
        for(int i = 2;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    for(int i = n;i>=1;i--){
        if(m[i].count(n + 1)){
            mx = i;
            break;
        }
    }
    if(mx <= 0){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=mx;i++)
        cout<<i<<" ";
    cout<<(n + 1)<<" ";
    for(int i=(mx + 1);i<=n;i++)
        cout<<i<<" ";
    cout<<endl;
    return;
}
int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}