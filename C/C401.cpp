#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if((n - m) > 1){
        cout<<-1<<endl;return 0;
    }
    if(n >= m && (n - m) <= 1){
        if(n > m) cout<<0,n--;
        while(m > 0 && n > 0) cout<<1<<0,m--,n--;
        return 0;
    }else{
        if(!((m - n) <= n || m <= 2*(n + 1))){cout<<-1<<endl;return 0;}
        while(m > 0 && n > 0 && m > n) cout<<1<<1<<0,m-=2,n--;
        if(m == n){while(n > 0 && m > 0) cout<<1<<0,m--,n--;
            return 0;}
        if(m == 1)
            cout<<1;
        if(m == 2)
            cout<<1<<1;
    }
    return 0;
}