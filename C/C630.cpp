#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long dp[57];
    dp[1] = 2;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i - 1] + (long long)pow(2, i);
    }
    cout<<dp[n]<<endl;
    return 0;
}