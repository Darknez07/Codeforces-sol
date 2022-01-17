#include <iostream>
#include <cmath>
using namespace std;
#define ull unsigned long long
int main(){
    int t;
    ull n,m,num,sum,cycl,rem;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(m > n || m % 10 == 0){
            cout<<0<<endl;
            continue;
        }
        if(m == 1 && n == 1){
            cout<<1<<endl;
            continue;
        }
        cycl = (m%2 ? 9: 4);
        cycl++;
        sum = (m%2 ? 45: 20);
        if(m%10 == 5){
            cycl = 2;
            sum = 5;
        }
        num = n;
        n/=m;
        rem = n;
        rem%=cycl;
        n/=cycl;
        sum*=n;
        num-=(num%m);
        for(int j=0;j<rem;num-=m,j++) sum+=(num%10);
        cout<<sum<<endl;
    }
}