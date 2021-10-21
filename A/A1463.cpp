#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    long a,b,c,sum;
    while(t--){
        cin>>a>>b>>c;
        sum = a+ b + c;
        //6 shots + 3 shots at 7th shot
        // And for the next one we have enough shots to cover min
        if(sum % 9 == 0 && sum/9 <= min(min(a,b),c)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}