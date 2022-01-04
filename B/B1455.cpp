#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    ll x,calc,c;
    cin>>t;
    while(t--){
        cin>>x;
        for(c = 1;c<=1420;c++){
            calc = c*(c+1)/2;
            if(calc >= x){
                break;
            }
        }
        if(calc == x + 1)
            c++;
        cout<<c<<endl;
    }
    return 0;
}