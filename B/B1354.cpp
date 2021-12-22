#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,len,lens;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        len = INT_MAX;
        int dp[4] = {-1,-1,-1,-1};
        for(int i=0;i<s.length();i++){
            dp[s[i] - '0'] = i + 1;
            if(dp[1] != -1 && dp[2] != -1 && dp[3] != -1){
                lens = max(max(dp[1],dp[2]),dp[3]) - min(min(dp[1],dp[2]),dp[3]) + 1;
                len = min(len, lens);
            }
        }
        if(dp[1] == -1 || dp[2] == -1 || dp[3] == -1)
            cout<<0<<endl;
        else
            cout<<len<<endl;
    }
}