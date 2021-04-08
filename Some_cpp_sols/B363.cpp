#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long n,k,w;
    cin>>n>>k;
    vector<long> vec(n, 0);
    vector<long> dp(n-k+1, 0);
    for(int i=0;i<n;i++){cin>>w;vec[i] = w;}
    for(int i=0;i<k;i++){dp[0]+=vec[i];}
    for(int i=k;i<n;i++){dp[i - k +1]+=(dp[i - k]+ vec[i] - vec[i - k]);}
    auto it = min_element(dp.begin(),dp.end());
    cout<<(it - dp.begin())+1;
    return 0;
}