#include <iostream>
using namespace std;
int main(){
    int t,n,done;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<=34;i++){
            done = 0;
            for(int j=0;j<=20;j++){
                if((7*j + 3*i) == n){
                    done = 1;
                    break;
                }
            }
            if(done){
                break;
            }
        }
        cout<<(done ? "YES":"NO")<<endl;
    }
    return 0;
}