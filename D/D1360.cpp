#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main(){
    ll t,n,k,i,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k >= n){
            cout<<1<<endl;
        }else{
            ans = n;
            for(i=1;i*i<=n;i++){
                if(n % i == 0){
                    if(i <= k)
                        ans = min(ans, n/i);
                    if(n/i <= k)
                        ans = min(ans, i);
                }
            }
            cout<<ans<<endl;
        }
    }
}