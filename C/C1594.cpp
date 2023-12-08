#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(){
    int n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    bool ok = true;
    for(int i=0;i<n;i++){
        if(s[i] != ch){ok = false;break;}
    }
    if(ok){cout<<0<<endl;return;}
    // As there will no factor for i
    // in the previous as well as coming
    // i's
    for(int i = n/2 + 1;i<=n;i++){
        if(s[i - 1] == ch){
            cout<<1<<endl;cout<<i<<endl;
            return;
        }
    }
    // Since all the right is taken
    // n - 1 and n  will cover everything
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}