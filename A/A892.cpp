#include <iostream>
using namespace std;
int main(){
    long long n,a;
    cin>>n;
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    long long mx1 = -1,mx2 = -1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a > mx1){
            mx2 = mx1;
            mx1 = a;
        }else if(a > mx2){
            mx2 = a;
        }
    }
    if((mx1 + mx2) >= sum){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}