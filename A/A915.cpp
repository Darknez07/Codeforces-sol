#include <iostream>
using namespace std;
int main(){
    int n,k,mx = -1,val;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>val;
        if(k % val == 0){
            mx = max(mx, val);
        }
    }
    cout<<k/mx;
    return 0;
}