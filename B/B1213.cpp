#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,count,mn;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        count = 0;
        mn = v[n - 1];
        for(int i=n - 2;i>=0;i--){
            if(v[i] <= mn){
                mn = v[i];
                continue;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}