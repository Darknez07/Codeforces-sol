#include <iostream>
using namespace std;
int main(){
    long long a,b,v1,v2;
    cin>>a>>b;
    long long counter = 0;
    while(b > 0 && a > 0){
        counter+=(a/b);
        a%=b;
        v1 = min(b,a);
        v2 = max(a,b);
        a = v2;
        b = v1;
    }
    cout<<counter<<" ";
    return 0;
}