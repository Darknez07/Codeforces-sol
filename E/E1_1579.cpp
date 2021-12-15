#include <iostream>
#include <deque>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long fx;
        deque<long> dq;
        for(int i=0; i<n; i++){
            cin>>fx;
            if(dq.empty() || fx < dq[0]){
                dq.push_front(fx);
            }else{
                dq.push_back(fx);
            }
        }
        for(int i=0; i<n; i++){
            cout<<dq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}