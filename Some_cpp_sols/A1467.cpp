#include <iostream>
using namespace std;
int main(){
    int t,n,counter;cin>>t;while(t--){cin>>n;counter=0;for(int i=0;i<n;i++){if(i == 2 || i == 0){cout<<9;}if(i == 1){cout<<8;}if(i > 2){cout<<counter;counter = counter == 9 ? 0: counter + 1;}}cout<<"\n";}
    return 0;
}