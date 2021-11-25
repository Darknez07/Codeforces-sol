#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    double l,L,v,r;
    while(t--){
        cin>>L>>v>>l>>r;
        // Picking up latern 1 is a problem
        // We have picked it in L/v
        // And reduceed it in r/v
        // if v == 1
        // Else it's fine
        // So 1 was included 2 times and excluded none
        cout<<(long)(floor(L/v) - floor(r/v) + floor((l - 1)/v))<<endl;
    }
    return 0;
}