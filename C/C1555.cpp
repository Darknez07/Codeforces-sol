#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long

vector<vector<int>> v;
vector<vector<int>> dp;
int cols;
pair<int,int> get_scores(int start){
    int alice = dp[0][start] + dp[1][start];
    int up_score = 0, down_score = 0;
    for(int i=start + 1;i<cols;i++)
        up_score+=v[0][i];
    for(int i=start - 1;i>=0;i--)
        down_score+=v[1][i];
    return make_pair(alice,max(up_score,down_score));
}

void solve(){
    cin>>cols;
    v.assign(2,vector<int> (cols));
    for(int i=0;i<cols;i++) cin>>v[0][i];
    for(int i=0;i<cols;i++) cin>>v[1][i];
    dp.assign(2,vector<int> (cols));
    dp[0][0] = v[0][0];
    dp[1][cols - 1] = v[1][cols - 1];
    
    for(int i=1;i<cols;i++)
        dp[0][i]+=(dp[0][i - 1] + v[0][i]);
    for(int i=cols - 2;i>=0;i--)
        dp[1][i]+=(dp[1][i + 1] + v[1][i]);
    vector<pair<int,int>> scores(cols);
    for(int i=0;i<cols;i++){
        scores[i] = get_scores(i);
    }
    sort(scores.begin(),scores.end(),[](pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    });
    cout<<scores[0].second<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}