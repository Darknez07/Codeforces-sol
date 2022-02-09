#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n < m){
        int temp = m,steps = 0;
        while(temp > n){
            if(temp % 2){
                temp++;
                steps++;
            }else{
                temp/=2;
                steps++;
            }
        }
        cout<<(n - temp + steps)<<endl;
    }else{
        cout<<(n - m)<<endl;
    }
}