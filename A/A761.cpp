#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a == 0 && b == 0){
        cout<<"NO";
        return 0;
    }
    if(abs(b - a) <= 1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}