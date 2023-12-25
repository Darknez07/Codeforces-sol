#include <iostream>
#include <vector>
using namespace std;
int M = 1e9+7;

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> dp(2023,vector<int> (2023));
    dp[0][1] = 1;
    // We are solving a 2d DP for 
    // [length of array divisiblity][number in consideration]
    // which in turns depends on the length - 1 and the original number taken
    // That is if we have 3, we need to solve for length 2 with a number
    // Thus 3 set comes from 2 set of divisible
    for(int i=1;i<=k;i++)
        for(int j=1;j<=n;j++)
            for(int l=j;l<=n;l+=j)
                (dp[i][l]+=dp[i - 1][j])%=M;
    int ans = 0;
    // Summing all the cases of the k len divisiblity
    for(int i=1;i<=n;i++) (ans+=dp[k][i])%=M;
    cout<<ans<<endl;
    return 0;
}