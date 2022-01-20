#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    int n,from;
    cin>>n;
    vector<int> v(n, 0),a;
    for(auto &x: v) cin>>x;
    if(n == 2){
        cout<<(v[0] > v[1] ? 1: 0)<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        a.push_back(v[i] - v[i - 1]);
    }
    a.push_back(v[0] - v[n - 1]);
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i] < 0){
            cnt++;
            from = (i + 1) % n;
        }
    }
    if(cnt <= 1)
        cout<<(cnt == 0 ? 0: (n - from)%n)<<endl;
    else
        cout<<-1<<endl;
    return 0;
}