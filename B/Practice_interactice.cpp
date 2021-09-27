#include <iostream>
#include <string>
using namespace std;
int main(){
    string ch;
    int l = 1, r = 1e6,mid;
    while(l<=r){
        mid = (l + r + 1)/2;
        cout<<mid<<endl;
        getline(cin, ch);
        if(ch[0] == '<')
            r = mid - 1;
        else
            l = mid;
        if(ch[0] == '\0')
            break;
    }
    return 0;
}