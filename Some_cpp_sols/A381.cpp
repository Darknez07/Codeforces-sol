#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,left=0,right,seerja=0,dima=0;
    cin>>n;
    vector<int> v(n);
    right = n - 1;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    while(right>= left){
        if((n - 1 - left - right) % 2 == 0){
            seerja+=(v[left] > v[right] ? v[left++] : v[right--]);
        }else{
            dima+=(v[left] > v[right] ? v[left++]: v[right--]);
        }
    }
    cout<<seerja<<" "<<dima;
    return 0;
}