#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long t,d,n,x;
    cin>>t;
    while(t--){
        cin>>n>>d;
        x = (long)floor(sqrt(d) - 1);
        if((x + (float(d)/(x + 1))) <= n){
            cout<<"YES"<<endl;
            continue;
        }
        x = (long)ceil(sqrt(d) - 1);
        if((x + (float(d)/(x + 1))) <= n){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}