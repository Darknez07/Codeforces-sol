#include <iostream>
#include <cmath>
using namespace std;
#define ll  long long
void solve(){
    ll hc,hm,dc,dm,k,w,a,hkoma,mkohd,simple_m,simple_h,modi_ma,modi_hd; // W is weapon, a is health
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    simple_m = ceil((double)hc/dm),simple_h = ceil((double)hm/dc);
    for(int i=0;i<=k;i++){
        hkoma = ceil((double)hm/(dc + w*i)); // Attack modified
        mkohd = ceil((double)(hc + a*i)/dm);
        if(hkoma <= simple_m || mkohd >= simple_h){
            cout<<"YES"<<endl;
            return;
        }
        modi_ma = ceil((double)(hc + (k - i)*a)/dm); // According defense modif when attack used i
        modi_hd = ceil((double)hm/(dc + (k - i)*w)); // According attack modif when defense used i
        if(hkoma <= modi_ma || mkohd >= modi_hd){
            cout<<"YES"<<endl;
            return; 
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}