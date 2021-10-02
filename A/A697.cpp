#include <iostream>
using namespace std;
int main(){
    long t,s,x;
    cin>>t>>s>>x;
    x-=t;
    if(x == 1 || x < 0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(x % s == 0){
        cout<<"YES"<<endl;
    }else if((x - 1) % s == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}