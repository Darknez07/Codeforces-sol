#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,turn,v;
    cin>>t;
    bool dies;
    while(t--){
        cin>>n;
        turn = 0;
        dies = false;
        for(int i=0;i<n;i++){
            cin>>v;
            if(v == 1 && !dies){
                turn++;
            }else{
                dies = true;
            }
        }
        if(dies)
            cout<<(turn % 2 == 0 ? "First": "Second")<<endl;
        else
            cout<<(turn % 2 == 0 ? "Second": "First")<<endl;
    }
    return 0;
}