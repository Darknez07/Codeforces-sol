#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<int> v;
    char ch;
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch == '1')
            v.push_back(n - i - 1);
    }
    int el = 0;
    bool yes = false;
    for(int i=0;i<v.size();i++){
        if(v[i] == y){
            yes = true;
            continue;
        }
        if(v[i] < x)
            el++;
    }
    el+=(yes ? 0: 1);
    cout<<el;
    return 0;
}