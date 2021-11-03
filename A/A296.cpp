#include <iostream>
using namespace std;
int main(){
    int counter[1001] = {};
    int n,val,mx = -1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        counter[val]++;
        mx = max(mx, counter[val]);
    }
    if(mx > (n/2 + n%2))
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}