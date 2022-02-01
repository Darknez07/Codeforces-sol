#include <iostream>
#include <string>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    bool hasCW = false,hasCCW = false;
    for(int i=0;i<n;i++){
        if(s[i] == '>') hasCW = true;
        if(s[i] == '<') hasCCW = true;
    }
    // if only one direction exists
    // Or else both directions only
    if(hasCW && hasCCW){
        s+=s[0];
        int ans = 0;
        for(int i=0;i<n;i++)
            // If directions are avialable
            // From both sides
            // L and R both
            // Just count return paths
            // Easy ? Yes
            if(s[i] == '-' || s[i + 1] == '-') ans++;
        cout<<ans<<endl;
    }else{
        cout<<n<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}