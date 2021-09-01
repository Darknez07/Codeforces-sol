#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    n = *min_element(a.begin(),a.end());
    cout<<(n == 1 ? -1: 1);
    return 0;
}