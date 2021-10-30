#include <iostream>
#include <string>
using namespace std;
int main(){
    long long t,A,B;
    cin>>t;
    while(t--){
        cin>>A>>B;
        // Because All A's can be concated by 9
        // Similiary by 99,999 and so on;
        // Till the number hits rock bottom
        // -1 because there may not be
        // 999 for a three digit number < 999
        cout<<A*(to_string(B + 1).length() - 1)<<endl;
    }
    return 0;
}