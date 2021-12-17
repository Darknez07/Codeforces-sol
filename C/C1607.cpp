#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n == 1){
            cout<<v[0]<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        long ans = v[0];
        for(int i=1;i<n;i++){
            // Because as soon as minimum is slashed out
            // The next minimum will be the original 2nd minimum
            ans = max((v[i] - v[i - 1]),ans);
        }
        // Display ans.
        cout<<ans<<endl;
    }
    return 0;
}