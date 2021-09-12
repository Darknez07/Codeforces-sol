#include <iostream>
using namespace std;
int main(){
    int n,c,v,prev;
    cin>>n>>c;
    int max = -1;
    for(int i=0;i<n;i++){
        cin>>v;
        if(i == 0){
            prev = v;
        }else{
            if(max < (prev - v - c))
                max = (prev - v - c);
            prev = v;
        }
    }
    if(max < 0)
        max = 0;
    cout<<max;
    return 0;
}