#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll r,g,b;
    cin>>r>>g>>b;
    cout<<min((r + b + g)/3, min(r + b, min(b + g, g + r)));
    return 0;
}