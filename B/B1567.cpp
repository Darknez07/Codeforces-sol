#include <iostream>
using namespace std;
int main(){
    int t,a,b,x;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a == 1 && b >= 2){
            cout<<2<<endl;
            continue;
        }
        if(a % 4 == 1){
            x = a - 1;
        }else if( a % 4 == 2){
            x = 1;
        }else if( a % 4 == 3){
            x = a;
        }else{
            x = 0;
        }
        if(x == b){
            cout<<a<<endl;
        }else if((x ^ b) == a){
            cout<<(a + 2)<<endl;
        }else{
            cout<<(a + 1)<<endl;
        }
    }
    return 0;
}