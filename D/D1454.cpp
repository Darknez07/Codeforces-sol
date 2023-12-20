#include <iostream>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

int isPrime(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            return i;
        }
    }
    return 0;
}

map<int,int> PrimeFactors(ll n){
    map<int,int> factors;
    while(n % 2 == 0){
        factors[2]++;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n % i == 0){
            factors[i]++;
            n/=i;
        }
    }
    return factors;
}

void solve(){
    ll n;
    cin>>n;
    int num = isPrime(n);
    if(!num){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    map<int,int> factors = PrimeFactors(n);
    bool allOnes = true;
    int max_factor, numbers = -1;
    for(auto k: factors){
        if(k.second > 1){allOnes = false;}
        if(k.second > numbers){
            numbers = k.second;
            max_factor = k.first;
        }
    }
    if(allOnes){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    ll prod = 1;
    cout<<numbers<<endl;
    for(int i=1;i<numbers;i++){
        cout<<max_factor<<" ";
        prod*=max_factor;
    }
    cout<<(n/prod)<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}