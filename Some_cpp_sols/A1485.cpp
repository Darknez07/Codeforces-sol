#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    ll t,a,b,c,count,ans;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans = 1e18;
        for(ll i=0;i*i<= a;i++){
            if(b == 1 && i == 0)
                continue;
            c = a;
            count = i;
            while(c){c/=(b + i);count++;}
            ans = min(ans, count);
        }
        cout<<ans<<endl;
    }
}