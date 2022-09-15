#include <iostream>
using namespace std;

void solve(){
    int H,M,t,h,m;
    cin>>t>>H>>M;
    int ans = INT_MAX;
    int start = 60*H + M,reached;
    while(t--){
        cin>>h>>m;
        reached = h*60 + m;
        if(start > reached) reached+=(24*60); // 6 10 -> start, reached 6 2, start = 370, reached = 362
        // So real sep, 1440 - 8 -> 1432 -> 23 52 
        ans = min(ans, reached - start);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--) solve();
}