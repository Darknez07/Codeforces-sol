#include <iostream>
#include <set>
using namespace std;
int n,val,mx,mn;
void solve(){
    cin>>n;
    mx = -1,mn = 1000;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>val;
        mx = max(mx,val);
        mn = min(mn,val);
        s.insert(val);
    }
    if(mx == mn){
        cout<<0<<endl;
        return;
    }
    if(s.size() == 2){
        cout<<((mx - mn) % 2 == 0 ? (mx - mn)/2: (mx - mn))<<endl;
        return;
    }
    if(s.size() > 3){
        cout<<-1<<endl;
        return;
    }
    for(auto x: s){
        if(x!=mn && x!=mx)
            val = x;
    }
    if((mx + mn) == 2*val)
        cout<<abs(mx - val)<<endl;
    else
        cout<<-1<<endl;
    return;
}
int main(){
    solve();
}