#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long last;
    bool a;
    int t,n;
    cin>>t;
    while(t--){cin>>n;last = -1;a=false;vector<long> v(n); for(int i=0;i<n;i++){cin>>v[i];if(i > 0 && v[i] >= last){a=true;} last = v[i];}puts(a ? "YES":"NO");}
    return 0;
}