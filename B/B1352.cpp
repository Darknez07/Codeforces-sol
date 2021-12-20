#include <iostream>
using namespace std;
int main(){
    int t;
    long n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        // Equailty is easy all 1
        if(n == x){
            cout<<"YES"<<endl;
            for(int i=0;i<x;i++)
                cout<<1<<" ";
            cout<<endl;
            continue;
        }
        // Easy n can' t be less than x
        if(n < x){
            cout<<"NO"<<endl;
            continue;
        }
        // Now if any even number exist after maximum 2's which is (x - 1)
        // We say yo possible
        if((n - 2*x + 2) % 2 == 0 && (n - 2*x + 2) > 0){
            cout<<"YES"<<endl;
            for(int i=0;i<(x - 1);i++)
                cout<<2<<" ";
            cout<<(n - 2*(x - 1))<<endl;
            continue;
        }
        // If odd number possible after maximum 1's then
        // We can say yes possible
        if((n - x + 1) % 2 == 1 && (n - x + 1) > 0){
            cout<<"YES"<<endl;
            for(int i=0;i<(x - 1);i++)
                cout<<1<<" ";
            cout<<(n - (x - 1))<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}