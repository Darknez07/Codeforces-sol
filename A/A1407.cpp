#include <iostream>
using namespace std;
int main(){
    int t,n,val,zeros,ones;
    cin>>t;
    while(t--){
        cin>>n;
        zeros = 0;
        ones = 0;
        for(int i=0;i<n;i++){
            cin>>val;
            if(val == 0){
                zeros++;
            }else{
                ones++;
            }
        }
        if(zeros >= ones){
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++)
                cout<<0<<" ";
        }else{
            // We can always take an extra 1
            if((n/2) % 2 == 1) n+=2;
            cout<<(n/2)<<endl;
            for(int i=0;i<n/2;i++)
                cout<<1<<" ";
        }
        cout<<endl;
    }
}