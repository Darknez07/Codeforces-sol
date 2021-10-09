#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int ans = 4*sqrt(x*z/y) + 4*sqrt(x*y/z) + 4*sqrt(z*y/x);
    cout<<ans<<endl;
    return 0;
}