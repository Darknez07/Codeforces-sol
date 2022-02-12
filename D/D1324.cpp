#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll> a(n, 0),b(n, 0),diffs(n, 0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) diffs[i] = a[i] - b[i];
    sort(diffs.begin(),diffs.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(diffs[i] <= 0) continue;
        // ai - bi + aj - bj > 0
        // ci = ai - bi
        // ci + cj > 0
        // Thus ci + cj  >= 1
        // To cj >= 1 - ci;
        // Awesome;
        int pos = lower_bound(diffs.begin(),diffs.end(),-diffs[i] + 1) - diffs.begin();
        ans+=(i - pos);
    }
    cout<<ans<<endl;
    return 0;
}