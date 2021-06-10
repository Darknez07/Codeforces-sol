#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    long n,x,w;
    cin>>t;
    while(t--){cin>>n;for(x=1;x<n;x++){if(n % x == 0){w = n;w/=x;w++;if(!(w & (w - 1))){break;}}}cout<<x<<endl;}
    return 0;
}