#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    double sum = 0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if((sum/n) >= 4.5){
        cout<<0;
        return 0;
    }
    int res = 0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        sum+=(5 - v[i]);
        res++;
        if((sum/n) >= 4.5)
            break;
    }
    cout<<res;
    return 0;
}