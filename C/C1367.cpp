#include <iostream>
#include <string>
#include <cmath>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
void solve(){
    int n,k,res = 0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n;){
        int left = (s[i] == '1' ? k: 0);
        int j = i + 1;
        for(;j < n && s[j] != '1';j++);
        // Find until 1 or end of series
        int right = (j < n && s[j] == '1' ? k: 0);
        // If one found it should set k locations ahead
        int len = j - i;
        // Len is the distance between the 1 or last
        if(left == k)
        // If left has reached k because i is 1
            len--;
        // Decrease length by left + right;
        // 0 + k, k + k, 0
        // i.e. found 1 both sides.
        // Thus length must be decreased by k or 2k
        // i.e. if both have 1's or none of them or one of them
        len-= left + right;
        if(len > 0)
        // Length of 0's such that with k length
        // i.e. there are len + k zeros
            res+=(len + k)/(k + 1);
        // Why j because it's either all 0 and done
        // or a one found
        // Then just go to next one
        i = j;
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}