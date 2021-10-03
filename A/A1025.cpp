#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<"Yes";
        return 0;
    }
    string s;
    vector<int> v(26);
    cin>>s;
    for(int i=0;i<n;i++){
        v[s[i] - 'a']++;
    }
    int manys = 0;
    for(int i=0;i<26;i++){
        if(v[i] > 1){
            manys++;
        }
    }
    if(manys >= 1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}