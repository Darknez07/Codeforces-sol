#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;

void solve(){
    int n;
    double h,d,A,base,prev,now,diff;
    cin>>n>>d>>h>>prev;
    A = 0.5*h*d*n;
    for(int i=1;i<n;i++){
        cin>>now;
        if(h > (now - prev)){
            diff = h - (now - prev);
            base = (diff*d/h);
            A-=0.5*diff*base;
        }
        prev = now;
    }
    printf("%.7f\n",A);
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}