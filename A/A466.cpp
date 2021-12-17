#include <iostream>
#include <cmath>
// Easy but mind did not work;
using namespace std;
int main(){
    long a,b,n,m;
    cin>>n>>m>>a>>b;
    if(m*a <= b)
        cout<<(n*a)<<endl;
    else
        cout<<(n/m)*b + min((n%m)*a,b)<<endl;
    return 0;
}