#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
ll euc(ll x, ll y, ll xd, ll yd){
    x-=xd,y-=yd;
    x*=x,y*=y;
    return ceil(sqrt(x + y));
}
int main(){
    ll r,x,y,xd,yd;
    cin>>r>>x>>y>>xd>>yd;
    ll dist = euc(x,y,xd,yd);
    // Not simple dist but ecludian dist
    // So to reach d if each step is 2*r;
    cout<<ceil((double)dist/(2*r))<<endl;
    return 0;
}