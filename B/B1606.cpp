#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    ll n,k,ans,curr;
    cin>>t;
    while(t--){
        cin>>n>>k;
        curr = 1;
        ans = 0;
        while(curr < k){
            curr*=2;
            ++ans;
        }
        if(curr < n) ans+=((n - curr + k - 1)/k);
        cout<<ans<<endl;
    }
    return 0;
}