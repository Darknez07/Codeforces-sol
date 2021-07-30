#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    long moves = 0;
    bool diff = false;
    cin>>s>>t;
    for(int p = s.size(),q=t.size(); p >= 0 || q >= 0; p--,q--){
        if(p < 0 || q < 0){moves++;continue;}
        if(s[p] != t[q]){diff = true;}
        if(diff){moves+=2;}
    }
    cout<<moves;
    return 0;
}