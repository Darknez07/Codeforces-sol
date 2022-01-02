#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int main(){
    int t,n,i;
    ll ans,prod,mx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        mx = LONG_LONG_MIN;
        for(i=0;i<n; i++){
            cin>>v[i];
            mx = max(v[i],mx);
        }
        sort(v.begin(),v.end(),[](ll a,ll b){
            return abs(a) > abs(b);
        });
        prod = v[n - 1]*v[n - 2]*v[n - 3]*v[n - 4]*v[n - 5];
        if(mx < 0){
            cout<<prod<<endl;
        }else{
            prod = v[0]*v[1]*v[2]*v[3]*v[4];
            for(i=5;i<n;i++){
                for(int j=0;j<5;j++){
                    ans = v[i];
                    for(int k=0;k<5;k++){
                        if(k!=j) ans*=v[k];
                    }
                    prod = max(prod,ans);
                }
            }
            cout<<prod<<endl;
        }
    }
    return 0;
}