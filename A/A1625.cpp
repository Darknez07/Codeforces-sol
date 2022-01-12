#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
    ll t,n,l,ans,count;
    cin>>t;
    while(t--){
        cin>>n>>l;
        ans = 0;
        vector<ll> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<l;i++){
            count = 0;
            for(int j=0;j<n;j++){
                count+=((v[j]&(1 << i)) > 0 ? 1: 0);
            }
            ans|=(2*count > n ? (1 << i): 0);
        }
        cout<<ans<<endl;
    }
    return 0;
}