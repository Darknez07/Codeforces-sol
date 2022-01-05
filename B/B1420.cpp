#include <iostream>
#include <vector>
// Multiprocessing
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long
int main(){
    int t,n;
    ll mx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int64_t ans = 0;
        for(int i=29;i>=0;i--){
            int64_t cnt = 0;
            for(int j=0;j<n;j++){
                // The numbers which has bits between
                // 100 and 10 in binary
                // 10000 and 1000 binary
                if(v[j] >= (1 << i) && v[j] < (1 << (i + 1)))
                    cnt++;
            }
            // Number of unique pairs
            ans+=(cnt*(cnt - 1)/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}