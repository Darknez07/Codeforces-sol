#include <iostream>
using namespace std;
int main(){
    long l,r,t,n;
    cin>>t;
    while(t--){
        cin>>l>>r>>n;
        if(l > n){
            cout<<n<<endl;
        }else{
            cout<<n*((r/n) + 1)<<endl;
        }
    }
    return 0;
}