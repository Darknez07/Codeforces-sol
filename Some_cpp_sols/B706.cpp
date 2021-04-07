#include<iostream>
#include<vector>
using namespace std;
int main(){
    long N = 100100;
    vector<long> q(N+1, 0);
    long n,a;
    int i,qn;
    // Number of restaurants
    cin>>n;
    // Giving number of times the price appears index of each restaurants
    for(i=0; i<n;i++){cin>>a;++q[a];}
    // Cumlative Array to get from the previous attempts
    // Thus obtaining the number of restaurants for that price or less than that
    for(i=1;i<=N;i++){q[i]+=q[i-1];}
    cin>>qn;
    // For a number "a" we find the number of restaurants by this
    while(qn--){cin>>a;cout<<q[(a <= N)? a: N]<<"\n";}
}