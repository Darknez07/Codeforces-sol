#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(n == 1){
        cout<<0<<endl;
        return;
    }
    if(n == 2){
        if(s[0] == s[1]){
            cout<<2<<" "<<2<<endl;
            return;
        }else{
            if(s[0] == 'L'){
                cout<<1<<" "<<2<<endl;
            }else{
                cout<<2<<" "<<2<<endl;
            }
            return;
        }
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'L'){
            ans+=i;
        }else{
            ans+=(n - i - 1);
        }
    }
    int times = 0;
    for(int i=0;i<n/2;i++){
        if(s[n - 1 - i] == 'L' && s[i] == 'R')
            continue;
        if(s[n - 1 - i] != 'L' && s[i] == 'R'){
            cout<<(ans - i + n - i - 1)<<" ";
            ans+=(n - 2*i - 1);
        }else if(s[n - 1 - i] == 'L' && s[i]!= 'R'){
            cout<<(ans - i + n - i - 1)<<" ";
            ans+=(n - 2*i - 1);
        }else if(s[n - 1 - i] != 'L' && s[i]!='R'){
            cout<<(ans - i + n - i - 1)<<" "<<(ans + 2*(n - 2*i - 1))<<" ";
            ans+=(2*(n - 2*i - 1));
            times++;
        }
        times++;
    }
    for(int i=times;i<n;i++)
        cout<<ans<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}