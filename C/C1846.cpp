#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long

// Problem is Rudolf centric

void solve(){
    int n,m,h,num;
    cin>>n>>m>>h;
    vector<pair<pair<int,int>,ll>> prob_pen(n);
    for(int i=0;i<n;i++){
        vector<ll> dp(m,0),init(m,0);
        for(int j=0;j<m;j++){
            cin>>init[j];
        }
        sort(init.begin(),init.end());
        dp[0] = init[0];
        int solved = -1;
        if(dp[0] > h){
            prob_pen[i] = make_pair(make_pair(i + 1,0),0);
            continue;
        }
        ll penalty = dp[0];
        for(int j=1;j<m;j++){
            dp[j]+=(dp[j - 1] + init[j]);
            if(dp[j] > h){
                solved = j;
                break;
            }
            penalty+=dp[j];
        }
        if(solved == -1){
            if(dp[m - 1] <= h){
                solved = m;
            }else{
                solved = m - 1;
                penalty-=dp[m - 1];
            }
        }
        prob_pen[i] = make_pair(make_pair(i + 1,solved),penalty);
    }
    sort(prob_pen.begin(),prob_pen.end(),[](pair<pair<int,int>,ll> a, pair<pair<int,int>,ll> b){
        if(a.first.second == b.first.second && b.second == a.second) return a.first.first < b.first.first;
        if(a.first.second == b.first.second) return a.second < b.second;;
        return a.first.second > b.first.second;
    });
    int place = 0;
    for(int i=0;i<n;i++){
        // cout<<prob_pen[i].first.first<<" "<<prob_pen[i].first.second<<" "<<prob_pen[i].second<<"   ";
        if(prob_pen[i].first.first == 1){
            place = i + 1;
            break;
        }
    }
    cout<<place<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}