#include <iostream>
using namespace std;
int main(){
    long a,b,c;
    cin>>a>>b>>c;
    if(c == 0){
        cout<<(a == b ? "YES":"NO");
        return  0;
    }
    if(b < a && c > 0)
        cout<<"NO";
    else if(a < b && c < 0)
        cout<<"NO";
    else{
        if((b - a) % c == 0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}