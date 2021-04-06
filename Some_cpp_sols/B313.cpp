#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int q,a,b;
    string s;
    cin>>s;
    vector<int> dp(s.length() - 1 ,0);
    dp[0] = (s[0] == s[1] ? 1: 0);
    for(int i=2;i<s.length();i++){
        dp[i - 1]+=dp[i - 2];
        if(s[i - 1] == s[i])
            dp[i - 1]+=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if(a == 1)
            cout<<dp[b - 2]<<"\n";
        else
            cout<<(dp[b - 2] - dp[a - 2])<<"\n";
    }
    return 0;
}