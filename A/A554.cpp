#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<(26*(s.length()+1) - s.length());
    return 0;
}