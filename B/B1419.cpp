#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
ll n,vase,np,count;
int ans;
void solve(){
    cin>>n;
    if(n <= 6){
        cout<<1<<endl;
        return;
    }
    ans = 0,count = 1,vase = 2,np;
    while(n){
        np = count*(count + 1)/2;
        if(n < np)
            break;
        n-=np;
        count+=vase;
        vase*=2;
        ans++;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    cout.precision(17);
    while(t--){
        solve();
    }
}