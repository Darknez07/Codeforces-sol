#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    vector<int> dp(n, 0);
    for(int i=0;i<n;i++){
        if(a[i] == b[i])
            continue;
        else
            dp[i] = 1;
    }
    if(n == 1){
        cout<<(a[0] == b[0] ? 0: 1);
        return 0;
    }
    int ans = 0;
    int i,last_skip;
    for(i=1;i<n;i++){
        if(dp[i] && dp[i - 1] && a[i]!=a[i - 1]){
            ans++,last_skip = i,i++;
        }else if(dp[i - 1]){
            ans++;
        }
    }
    if(i == n && dp[n - 1]){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}