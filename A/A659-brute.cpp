#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(b < 0){
        b = abs(b);
        while(b--){
            if(a == 0)
                a = n;
            a--;
        }
        if(a == 0)
            a = n;
        cout<<a;
    }else{
        cout<<(abs(a + b) % n == 0 ? n : abs(a + b) % n);
    }
    return 0;
}