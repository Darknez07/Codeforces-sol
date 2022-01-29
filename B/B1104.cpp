#include <iostream>
#include <string>
#include <stack>
// Greedy approach
using namespace std;
int main(){
    string s;
    int ans = 0;
    cin>>s;
    stack<char> prev;
    for(int i=0;i<s.length();i++){
        // Palindromic shit
        if(prev.empty() || prev.top()!=s[i]){
            prev.push(s[i]);
        }else{
            // Finally similiar
            prev.pop();
            ans++;
        }
    }
    cout<<(ans % 2 ? "Yes": "No")<<endl;
    return 0;
}