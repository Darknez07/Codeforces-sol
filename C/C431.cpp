#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
int n,k,d;
vector<vector<int>> dp(200,vector<int> (200, -1));
int dpsol(int b, int c){
    if(b < 0)
        return 0;
    if(b == 0)
    // If not left n
    // And c >= d -> 1,0 mean taken is gr8ter than req
    // There is the possibility of scan;
        return c>=d ? 1: 0;
    if(dp[b][c]!=-1)
    // Found in the dp;
        return dp[b][c];
    int toko = 0;
    for(int i=1;i<=k;i++){
        // Chosen weighted edge
        // Choose if c or i
        // i.e. we select the cth one or the ith weight
        // How many times we can select c
        toko+=dpsol(b - i, max(c, i));
        toko%=mod;
    }
    toko%=mod;
    return dp[b][c] = toko;
}
int main(){
    cin>>n>>k>>d;
    if(n == k && k == d){
        cout<<1<<endl;
        return 0;
    }
    // Intial start is 0;
    cout<<dpsol(n, 0)<<endl;
    return 0;
}