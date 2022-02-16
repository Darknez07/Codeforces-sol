#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void solve(){
    int a,b,ans;
    cin>>a>>b;
    int now = a|b;
    if(now == b){
        cout<<1<<endl;
        return;
    }
    ans = b - a;
    for(int x=a;x<b;x++){
        int temp = 0;
        bool done = false;
        for(int k = 20;k--;){
        if(done){
            if(x>>k&1)
                temp|=1<<k;
            continue;
        }
        if(b>>k&1)
            temp|=1<<k;
        else if(x>>k&1){
            temp|=1<<k;
            done = true;
        }
        }
        // temp is x|b
        // x is the a'
        // a' + (a' | b') + 1 - a  - b;
        if(ans > (x + 1 - a - b + temp))
            cout<<x<<" "<<temp<<endl;
        ans = min(ans,x + 1 - a - b + temp);
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}