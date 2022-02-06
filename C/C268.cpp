#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<min(n,m) + 1<<endl;
    // Cheeky math trick
    // Distance between two diagonal points is k*sqrt(2)
    // where k = |x - y| i.e. differnce between the points
    for(int i=0;i<=min(n,m);i++){
        cout<<i<<" "<<(min(n,m) - i)<<" "<<endl;
    }
    return 0;
}