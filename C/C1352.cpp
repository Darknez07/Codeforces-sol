#include <iostream>
using namespace std;
int main(){
    long a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a == b){
            cout<<(a + 1)<<endl;
            continue;
        }
        cout<<(b/(a - 1))*a + (b % (a - 1) == 0 ? -1:(b % (a - 1)))<<endl;
    }
    return 0;
}