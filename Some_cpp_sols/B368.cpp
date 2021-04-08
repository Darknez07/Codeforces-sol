#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    long n,t,q;
    cin>>n>>t;
    set<long> s;
    vector<long> vec;
    for(int i=0;i<n;i++){cin>>q;vec.push_back(q);}
    vector<long> dp(n ,0);
    dp[n - 1] = 1;
    s.insert(vec[n - 1]);
    for(int i=n-2;i>=0;i--){dp[i]+=dp[i+1];if(!(s.find(vec[i])!=s.end())){dp[i]+=1;s.insert(vec[i]);}}
    while(t--){cin>>q;cout<<dp[q - 1]<<"\n";}
    return 0;
}