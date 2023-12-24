#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> A(n, 0);
    vector<int> B(n, 0);
    for(int i=0;i<n;i++)    cin>>A[i];
    for(int i=0;i<n;i++)    cin>>B[i];
    int max_b = B[0];
    ll points = A[0];
    if(k == 1){
        cout<<points<<endl;
        return;
    }
    ll sum = A[0];
    for(int i=1;i<n;i++){
        points = max(points,(sum + (k - i)*max_b));
        if(k == i){
            cout<<points<<endl;
            return;
        }
        sum+=A[i];
        max_b = max(max_b, B[i]);
    }
    if(k >= n){
        points = max(points,(sum + (k - n)*max_b));
    }
    cout<<points;
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}