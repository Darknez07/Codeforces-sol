#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n,k;
    long pows;
    while(t--){
        cin>>n>>k;
        vector<long> powers;
        while(k!=0){
            pows = floor(log2(k));
            powers.push_back(pows);
            k-=pow(2,pows);
        }
        long long ans = 0;
        sort(powers.begin(),powers.end());
        for(int i=0;i<powers.size();i++){
            long long mid = 1;
            for(int j=0;j<powers[i];j++){
                mid*=n;
                mid%=(1000000007);
            }
            ans+=mid;
            ans%=(1000000007);
        }
        cout<<ans<<endl;
    }
    return 0;
}