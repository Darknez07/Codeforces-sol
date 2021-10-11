#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = " ";
    while(s[0]!='\0'){
        getline(cin, s);
        if(s == "\0")
            break;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}