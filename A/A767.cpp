#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int nx = n;
    vector<bool> v(n + 1);
    // Actually town people
    // behave weird
    for(int i=0;i<n;i++){
        cin>>x;
        // Until they find the maximum snack
        // They don't build the top
        v[x] = 1;
        while(v[nx] == 1){
            cout<<nx<<" ";
            --nx;
        }
        // Moreover until every next maximum is provided
        // They just place it with others previous
        if(i < n - 1)
            cout<<endl;
    }
    return 0;
}