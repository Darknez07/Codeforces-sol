#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    bool neg = false;
    while(t--){
        cin>>n;
        if(n % 2 == 0){
            cout<<n/2<<endl;
        }else if(neg){
            cout<<(n + 1)/2<<endl;
            neg = false;
        }else{
            cout<<(n - 1)/2<<endl;
            neg = true;
        }
    }
    return 0;
}