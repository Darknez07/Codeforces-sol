#include <iostream>
using namespace std;
int main(){
    int n;
    long f,t,k,max;
    cin>>n>>k;
    cin>>f>>t;
    max = t > k ? f - (t - k): f;
    for(int i=0;i<n-1;i++){
        cin>>f>>t;
        f = t > k ? f - (t - k) : f;
        max = f > max ? f: max;
    }
    cout<<max;
    return 0;
}