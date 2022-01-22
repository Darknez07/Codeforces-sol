#include <iostream>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
int n,i;
ll x,y;
double ans;
void solve(){
    cin>>n;
    multimap<ll,bool> m,d;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y == 0) d.insert(make_pair(x*x,true));
        else m.insert(make_pair(y*y,true));
    }
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y == 0) d.insert(make_pair(x*x,true));
        else m.insert(make_pair(y*y,true));
    }
    ans = 0;
    i = 0;
    for(auto x = m.begin(),y = d.begin();i<n;i++,++x,++y){
        ans+=sqrt(x->first + y->first);
    }
    cout<<ans<<endl;
}
int main(){
    cout.precision(17);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}