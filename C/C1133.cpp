#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long
int main(){
    int n,count,ans;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    ans = -1;
    for(int i=0;i<(n - 1);i++){
        count = upper_bound(v.begin(),v.end(),v[i] + 5) - v.begin();
        if((count - i) == n){
            cout<<n<<endl;
            return 0;
        }
        ans = max(ans,(count - i));
    }
    cout<<ans<<endl;
    return 0;
}