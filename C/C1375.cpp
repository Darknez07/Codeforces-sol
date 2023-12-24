#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,min_loc = -1;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0] > v[n - 1]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}