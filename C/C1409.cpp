#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t,n,x,y,d,ans,amt;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        d = (y - x);
        int i;
        for(i=d;i>=1;i--){
            if(d % i == 0 && (i+1) <= n){
                break;
            }
        }
        d/=i;
        amt = (y - x)/d;
        amt++;
        if(n == amt){
            for(int k=x;k<=y;k+=d)
                cout<<k<<" ";
            cout<<endl;
        }else{
            for(int k=x;k<=y;k+=d)
                cout<<k<<" ";
            int j = 0;
            for(int k=x - d;j<(n - amt) && k >=1;k-=d,j++)
                cout<<k<<" ";
            for(int k=y + d;j<(n - amt);k+=d,j++)
                cout<<k<<" ";
            cout<<endl;
        }
    }
    return 0;
}