#include <iostream>
using namespace std;
int gcd(int a, int b){
    return a == 0 ? b: gcd(b % a, a);
}
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        // Space between black and white
        if(gcd(a,b) == 1){
            cout<<"Finite";
        }else{
            cout<<"Infinite";
        }
        cout<<endl;
    }
    return 0;
}