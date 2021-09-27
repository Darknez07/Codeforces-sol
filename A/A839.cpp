#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int sum,n,k,carry;
    cin>>n>>k;
    vector<int> v(n);
    sum = 0;
    bool yes = false;
    carry = 0;
    int indx = -1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]+=carry;
        sum+=(v[i] >= 8 ? 8: v[i]);
        if(sum >= k && indx == -1){
            indx = i + 1;
        }
        carry = (v[i] < 8 ? 0: (v[i] - 8));
    }
    cout<<indx<<" ";
    return 0;
}