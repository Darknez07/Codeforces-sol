#include <iostream>
#include <string>
using namespace std;
bool Check_divisible(string s){
    int num = 0;
    long long n = stoll(s);
    for(int i=0;i<s.length();i++){
        num = s[i] - '0';
        if(num == 0)
            continue;
        if(n % num != 0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    string s;
    long long n;
    cin>>t;
    while(t--){
        cin>>s;
        n = stoll(s);
        while(!Check_divisible(s)){
            n++;
            s = to_string(n);
        }
        cout<<s<<endl;
    }
    return 0;
}