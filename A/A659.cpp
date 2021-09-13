#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    // Do b moves from a
    // but if neagtive readjust formula
    // -1 and 1 are not understood;
    cout<<(((a + b - 1) % n + n) %n + 1);
    return 0;
}