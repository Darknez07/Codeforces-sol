#include <iostream>
#include <vector>
using namespace std;
int main(){
    bool exists = false;
    int n,x,y,sum1 = 0,sum2 =0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x % 2!=y % 2){
            exists = true;
        }
        sum1+=x,sum2+=y;
    }
    if(sum1 % 2 == 0 && sum2 % 2 == 0){
        cout<<0<<endl;
    }else if(sum1 % 2 == 1 && sum2 % 2 == 1){
        if(exists){
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else if(sum1 % 2!=sum2 % 2){
        cout<<-1<<endl;
    }
}