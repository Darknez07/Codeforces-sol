#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    long ans,num,mx = LONG_MIN;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num < 0){
            ans = sqrt(abs(num));
            ans = 0 - ans;
        }else{
            ans = sqrt(num);
        }
        if(ans*ans != num){
            mx = max(num, mx);
        }
    }
    cout<<mx;
    return 0;
}