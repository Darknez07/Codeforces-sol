#include<iostream>
// Copied
using namespace std;
int main(){
    long long n,k,t;
    cin>>t;
    while(t--){cin>>n>>k;bool res = (n % 2 == k % 2) && (n >= k * k);puts(res ? "YES\n": "NO\n");}
    return 0;
}