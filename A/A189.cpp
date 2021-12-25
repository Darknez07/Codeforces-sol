#include <iostream>
using namespace std;
int main(){
    int n,a,b,c,r1,r2,r3;
    cin>>n>>a>>b>>c;
    // DP solution
    int dp[n + 1];
    dp[0] = 0;
    // Intially no ribbion is cut
    for(int i=1;i<=n;i++){
        r1 = INT_MIN;
        r2 = INT_MIN;
        r3 = INT_MIN;
        // If the ribbon length exceeds "a"
        if(i >= a)
            r1 = dp[i - a];
        // If ribbon length exceeds "b"
        if(i >= b)
            r2 = dp[i - b];
        // If ribbon length exceeds "c"
        if(i >= c)
            r3 = dp[i - c];
        // Maximum number of cuts made for either "a","b" and "c"
        dp[i] = 1 + max(r1,max(r2,r3));
        // 1 plus is for current step taken
        // SO here we have already cut a piece.
    }
    cout<<dp[n]<<endl;
    return 0;
}