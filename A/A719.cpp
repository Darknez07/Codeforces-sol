#include <iostream>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    if(n == 1){
        cin>>val;
        if(val == 0)
            cout<<"UP";
        else if(val == 15)
            cout<<"DOWN";
        else
            cout<<-1;
        return 0;
    }
    int counter[16] = {};
    int prev,inc;
    for(int i=0;i<n;i++){
        cin>>val;
        if(i == n - 1)
            inc = prev > val ? -1: 1;
        counter[val]++;
        prev = val;
    }
    if(val == 0)
        inc = 1;
    if(val == 15)
        inc = -1;
    cout<<(inc < 0 ? "DOWN": "UP");
    return 0;
}