#include <iostream>
#include <set>
using namespace std;
void solve(){
    int n,val,k;
    cin>>n>>k;
    set<int> s;
    // Distinct elements
    for(int i=0; i<n; i++){
        cin>>val;
        s.insert(val);
    }
    // IF MORE DIST THEN k obviously no k subarrays with same
    // sum
    if(s.size() > k){
        cout<<-1<<endl;
        return;
    }
    // number of elements
    cout<<n*k<<endl;
    for(int i=0;i<n;i++){
        // Well sum of uniq elements
        for(int x: s)
            cout<<x<<" ";
        // Same number of 1's to cover up k
        for(int j=0;j<(k - s.size());j++)
            cout<<1<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}