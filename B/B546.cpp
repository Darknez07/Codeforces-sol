#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,assign;
    long ans = 0;
    cin>>n;
    vector<int> v(n, 0);
    for(auto &x: v) cin>>x;
    sort(v.begin(), v.end());
    assign = v[0];
    for(int i=0; i<n; i++){
        if(assign < v[i])
            assign = v[i];
        ans+=abs(assign - v[i]);
        assign++;
    }
    cout<<ans<<endl;
    return 0;
}