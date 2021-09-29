#include <iostream>
using namespace std;
int main(){
    int sum = 0,prev = 0,n,curr,mx = -1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>curr;
        mx = max(mx, curr);
        sum+=(prev - curr);
        prev = curr;
    }
    if(-mx < sum){
        cout<<mx<<endl;
    }else{
        cout<<(-sum)<<endl;
    }
    return 0;
}