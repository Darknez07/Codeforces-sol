#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll unsigned long long
int main(){
    int t,n;
    ll sum, ans;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 0;
        ans = 0;
        vector<ll> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sum/=n;
        for(int i=0;i<n;i++){
            ans+=(v[i]-sum);
        }
        cout<<(ans == 0 ? 0: 1)<<endl;
    }
    return 0;
}