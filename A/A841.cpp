#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> v(26);
    for(int i=0;i<n;i++){
        v[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(v[i] == 0)
            continue;
        else if(v[i] > k){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}