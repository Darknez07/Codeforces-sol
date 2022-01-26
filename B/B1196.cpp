#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int n,k,odd_count;
void solve(){
    cin>>n>>k;
    odd_count = 0;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        odd_count +=v[i]%2;
    }
    if(odd_count < k || odd_count%2!=k%2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        if(k == 1) break;
        if(v[i]%2){
            cout<<i+1<<" ";
            --k;
        }
    }
    cout<<n<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}