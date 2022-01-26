#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start = 0;
    if(n <= 2){
        cout<<1<<endl;
        if(n == 1){
            cout<<1<<endl;
            return 0;
        }
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    cout<<2<<endl;
    bool shown = false;
    // Prime numbers are divisor of none
    // So grouped togather thus all others are
    // not smallest divisors.
    for(int i=2;i<=(n + 1);i++){
        if(i == 2 || i == 3)
            cout<<1<<" ";
        else{
            shown = false;
            for(int j=2;j<=sqrt(i);j++){
                if(i % j == 0){
                    cout<<2<<" ";
                    shown = true;
                    break;
                }
            }
            if(!shown)
                cout<<1<<" ";
        }
    }
    cout<<endl;
    return 0;
}