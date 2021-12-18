#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,a,x,odds;
    cin>>t;
    while(t--){
        cin>>n>>x;
        odds = 0;
        for(int i=0;i<n;i++){
            cin>>a;
            odds+=(a % 2);
        }
        if(odds == 0){
            cout<<"No"<<endl;
            continue;
        }
        if(x == 1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(odds >= x){
            if(x % 2 == 1 || (n - odds) >= 1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }else{
            if((odds % 2 == 1) || n >= (x + 1))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}