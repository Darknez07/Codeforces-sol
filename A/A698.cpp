#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,rest = 0;
    cin>>t;
    vector<int> v(t + 1,0);
    for(int i=1;i<=t;i++) cin>>v[i];
    for(int i=1;i<=t;i++){
        // We used this day as rest
        if(!v[i] || v[i - 1] == v[i]) rest++,v[i] = 0;
        // if 3 we choose according to previous day
        // What we do today;
        // Which may ffect the next day or let previous
        // if condition.
        else if(v[i] == 3) v[i] = v[i - 1]? 3 -  v[i - 1]: 0;
    }
    cout<<rest<<endl;
    return 0;
}