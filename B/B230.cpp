#include <iostream>
#include <cmath>
#define longs unsigned long long
using namespace std;
int main(){
    int n;
    cin>>n;
    longs val;
    bool no = false;
    for(int i=0;i<n;i++){
        cin>>val;
        longs s = sqrt(val);
        if(val <= 2){
            cout<<"NO"<<endl;
            continue;
        }
        if((s*s) == val){
            no = false;
            for(int i= 2;i<=sqrt(s);i++){
                if(s % i == 0){
                    no = true;
                    break;
                }
            }
            cout<<(no ? "NO":"YES")<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}