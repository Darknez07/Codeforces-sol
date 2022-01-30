#include <iostream>
#include <vector>
using namespace std;
int n,m,k,need;
void solve(){
    cin>>n>>m>>k;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0;i<(n - 1);i++){
        // This automatically adjust the sign
        // Because max(0, blah) will give
        // How far is v[i + 1] or next is from k
        // If it is too far than v[i]
        // And there is nothing in the bag(< 0)
        // The character is stuck.
        m+=(v[i] - max(0, v[i + 1] - k));
        if(m < 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}