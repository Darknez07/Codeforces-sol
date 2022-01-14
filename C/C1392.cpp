#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int t;
    ll n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        for(int i=0;i<n;i++)
            cin>>v[i];
        ans = 0;
        for(int i=0;i<n-1;i++){
            if(v[i] <= v[i + 1])
                continue;
            ans+=(v[i] - v[i + 1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}