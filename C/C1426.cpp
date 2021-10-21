#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int root = floor(sqrt(n));
        double act = sqrt(n);
        if(root * root >= n)
            cout<<2*(root - 1);
        else if((act - root) <= 0.5){
            cout<<2*root - 1;
        }else{
            cout<<2*root;
        }
        cout<<endl;
    }
    return 0;
}