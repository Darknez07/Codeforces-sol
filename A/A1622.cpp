#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    ll a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a == b && b == c && a % 2 == 0)
            cout<<"YES"<<endl;
        else if(a  == b && c % 2 == 0)
            cout<<"YES"<<endl;
        else if(b == c && a % 2 == 0)
            cout<<"YES"<<endl;
        else if(c == a && b % 2 == 0)
            cout<<"YES"<<endl;
        else if(a + b  == c || c + b == a || c + a == b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}