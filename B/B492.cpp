#include <iostream>
#include <vector>
#include <algorithm>
// Not hard
// But tricky
using namespace std;
int main(){
    int t;
    double l;
    cin>>t>>l;
    vector<double> v(t, 0);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    double ans = -1;
    bool last = false;
    sort(v.begin(),v.end());
    for(int i=1;i<t;i++){
        ans = max(ans, v[i] - v[i-1]);
    }
    if((ans/2) < v[0]){
        ans = v[0];
        last = true;
    }
    if(!last && (ans/2) < (l - v[t - 1])){
        ans = (l - v[t - 1]);
        last = true;
    }else if(last && ans < (l - v[t - 1])){
        ans = (l - v[t - 1]);
        last = true;
    }
    cout<<fixed<<(last ? ans: (ans/2))<<endl;
    return 0;
}