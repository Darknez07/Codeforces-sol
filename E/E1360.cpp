#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<vector<int> > v(n, vector<int> (n, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            v[i][j] = ch - '0';
        }
    }
    for(int i=n - 2;i>=0;i--){
        for(int j=n - 2;j>=0;j--){
            // Enough to check the last element i.e right
            // and down
            if(v[i][j] && !v[i + 1][j] && !v[i][j + 1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}