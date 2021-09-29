#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,mx = 1,take;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>take;
        m[take]++;
        mx = max(mx, take);
    }
    int mx2 = 1;
    for(int i=1;i<=(int)sqrt(mx);i++){
        if(mx % i == 0){
            m[i]--;
            if(i*i != mx)
                m[mx/i]--;
        }
    }
    for(auto x: m){
        if(x.second > 0)
            mx2 = max(mx2,x.first);
    }
    cout<<mx<<" "<<mx2<<endl;
    return 0;
}