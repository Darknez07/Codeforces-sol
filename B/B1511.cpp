#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int gcd(int a, int b){
    return a == 0 ?b: gcd(b % a, a);
}
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<1;
        // 10^a;
        for(int i=1;i<a;i++){
            cout<<0;
        }
        cout<<" ";
        // 11..(b  - c + 1)
        // Because to force gcd to c - 1;
        // We add c-1 zeros
        for(int i=0;i<(b - c + 1);i++){
            cout<<1;
        }
        for(int i=0;i<(c - 1);i++){
            cout<<0;
        }
        cout<<endl;
    }
    return  0;
}