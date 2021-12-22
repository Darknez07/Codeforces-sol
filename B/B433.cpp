#include <iostream>
#include <vector>
#include <algorithm>
# define longs unsigned long long
using namespace std;
int main(){
    longs n,m,type,l,r;
    cin>>n;
    vector<longs> v(n, 0), dp(n + 1, 0), dp_sorted(n + 1, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        dp[i + 1]+=(dp[i] + v[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        dp_sorted[i + 1]+=(dp_sorted[i] + v[i]);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>type>>l>>r;
        if(type == 1){
            cout<<(dp[r] - dp[l - 1])<<endl;
        }else{
            cout<<(dp_sorted[r] - dp_sorted[l - 1])<<endl;
        }
    }
    return 0;
}