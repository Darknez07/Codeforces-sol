#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,tos = 0,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val == 2) tos++;
    }
    if(tos  == 0){
        for(int i=0;i<n;i++)
            cout<<1<<" ";
        cout<<endl;
        return 0;
    }
    if(tos == 1){
        cout<<2<<" ";
        for(int i=1;i<n;i++)
            cout<<1<<" ";
        cout<<endl;
        return 0;
    }
    if(tos == n){
        for(int i=0;i<n;i++)
            cout<<2<<" ";
        return 0;
    }
    int ones = n - tos;
    if(ones >= 1){
        cout<<2<<" "<<1<<" "<<2<<" ";
        tos-=2,ones-=1;
    }
    for(int i=3;i<n;i++){
        if(tos){
            cout<<2<<" ";
            tos--;
        }else{
            cout<<1<<" ";
            ones--;
        }
    }
}