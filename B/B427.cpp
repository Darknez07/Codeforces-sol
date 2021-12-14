#include <iostream>
using namespace std;
int main(){
    int c,n,start = 0;
    long t,val,ans = 0;
    cin>>n>>t>>c;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val <= t){
            start++;
        }else{
            if(start >= c){
                ans+=(start - c + 1);
            }
            start = 0;
        }
    }
    if(start >= c){
        ans+=(start - c + 1);
    }
    cout<<ans<<endl;
    return 0;
}