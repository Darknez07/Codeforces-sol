#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n,l,r,v1,v2;
    cin>>n>>l>>r;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    long long count = 0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i] >= r) continue;
        // if(v[i] <= (l - 1))  continue;
        // not less than val(includes equal)
        // The values till where all are greater than or equal to requireed
        v1 = (lower_bound(v.begin()+i+1,v.end(),l - v[i]) - v.begin());
        // Greater than val
        // Only just required to
        v2 = (upper_bound(v.begin()+i+1,v.end(),r - v[i]) - v.begin());
        // Range where we find the first value of l - v[i]
        // And last value of r - v[i];
        count+=(v2 - v1);
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}