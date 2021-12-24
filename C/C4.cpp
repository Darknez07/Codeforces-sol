#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        if(!m[s])
            cout<<"OK"<<endl;
        else
            cout<<(s + to_string(m[s]))<<endl;
        m[s]++;
    }
    return 0;
}