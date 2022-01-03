#include <iostream>
using namespace std;
int main(){
    int t,k,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k > (n + 1)/2){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i == j && (i % 2 == 0) && k){
                        cout<<"R";
                        k--;
                    }else
                        cout<<".";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}