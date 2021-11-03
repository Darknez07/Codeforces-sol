#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    bool no = false;
    cin>>t;
    vector<string> snames(t);
    for(int i=0;i<t;i++)
        cin>>snames[i];
    sort(snames.begin(), snames.end(),[](const string &a, const string &b){
        return a.length() < b.length();
    });
    for(int i=1;i<t;i++){
        if(snames[i].find(snames[i - 1]) == string::npos){
            no = true;
            break;
        }
    }
    if(no){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<t;i++){
        cout<<snames[i]<<endl;
    }
    return 0;
}