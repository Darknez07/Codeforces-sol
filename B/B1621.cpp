#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t,n;
    ll l,r,c,lcost,rcost,cost,lencost,mL,Mr,Ml,ans;
    cin>>t;
    while(t--){
        cin>>n;
        mL = LONG_MAX,Ml = 0,Mr = 0;
        lcost = LONG_MAX,rcost = LONG_MAX,lencost = LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>l>>r>>c;
            if(mL > l)
                mL = l, lcost = LONG_MAX;
            if(mL == l)
                lcost = min(c,lcost);
            if(Mr < r)
                Mr = r, rcost = LONG_MAX;
            if(Mr == r)
                rcost = min(c,rcost);
            if(Ml < (r - l + 1))
                Ml = (r - l + 1), lencost = LONG_MAX;
            if(Ml == (r - l + 1))
                lencost = min(c,lencost);
            ans = lcost + rcost;
            if(Ml == (Mr - mL + 1))
                ans = min(lencost, ans);
            cout<<ans<<endl;
        }
    }
    return 0;
}