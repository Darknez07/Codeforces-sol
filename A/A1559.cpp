#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    int mn = v[0];
    for(int i=1;i<n;i++) mn&=v[i];
    cout<<mn<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}