#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
ll mod = 1000000007;
int main(){
    int t,k;
    ll n,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        // Every number has 1 bit to be 0 so that we get
        // 0 and as 1011, 0111, 1101, 1110 gives 0 and
        // Thus 1st has n choices to have 0 as either of them
        // like for 1st bit we can choose any of the n to go 0
        // Similarly for k bits we have n options
        // 0000 1111 0000 1111
        // Again this is k times as choosing the 1st,2nd,3rd bit
        // simultaneously  sot n^k;
        ans = 1;
        for(int i=0;i<k;i++){ans*=n;ans%=mod;}
        cout<<ans<<endl;
    }
    return 0;
}