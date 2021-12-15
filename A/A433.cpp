#include <iostream>
#include <vector>
using namespace std;
int main(){
    int sau = 0,dausau = 0,n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num == 100) sau++;
        else dausau++;
    }
    int i,j;
    bool found = false;
    for(i=0;i<=sau;i++){
        for(j=0;j<=dausau;j++){
            if(2*i+4*j == (sau + 2*dausau)){
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    cout<<(found ? "YES": "NO");
    return 0;
}