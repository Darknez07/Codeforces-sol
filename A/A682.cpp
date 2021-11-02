#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,m,ans = 0,sub = 4, mod = 5;
    cin>>n>>m;
    vector<long long> counter(mod,0);
    for(long long i=1;i<=max(m,n);i++)
        counter[i % mod]++;
    for(long long i=1;i<=min(m,n);i++)
        ans+=counter[(mod - (i % mod)) % mod];
    cout<<ans<<endl;
    return 0;
}