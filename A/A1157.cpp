#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum = 0;
    int j;
    for(int i=s.length() - 1; i>=1;i--){
        sum+=(10 - (s[i] - '0'));
        s[i] = '0';
        j = i - 1;
        while(j >=0 && s[j] == '9'){
            s[j] = '0';
            j--;
        }
        if(j == -1){
            break;
        }
        s[j]++;
        i = j + 1;
    }
    // Sneaky logic
    // We really do not care about anything
    // Because anyhow we can create 1,2,3,4,5,6,7,8,9
    // I mean even from any of one number other 8 are there
    sum+=9;
    cout<<sum<<endl;
    return 0;
}