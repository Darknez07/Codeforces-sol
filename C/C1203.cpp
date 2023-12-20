#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    int  n;
    cin>>n;
    vector<ll> num(n, 0);
    for(int i=0;i<n;i++) cin>>num[i];
    ll prod = num[0];
    for(int i=1;i<n;i++){
        prod = gcd(num[i],prod);
    }
    if(prod == 1){
        cout<<1<<endl;
        return 0;
    }
    ll nums = 2;
    for(ll i=2;i<=sqrt(prod);i++){
        if(prod % i == 0){
            nums+=(i*i == prod ? 1: 2);
        }
    }
    cout<<nums<<endl;
}