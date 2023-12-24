#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    for(ll i=sqrt(n);i>=1;i--){
        if(n % i == 0 && gcd(i, n/i) == 1){
            cout<<i<<" "<<(n/i)<<endl;
            return 0;
        }
    }
    return 0;
}