#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Win(string s, int who){
    vector<int> goals(2,0);
    vector<int> r(2,5);
    for(int i=0;i<10;i++){
        if(goals[0] > goals[1] + r[1] || goals[1] > goals[0] + r[0])
            return i;
        else if(s[i] == '1')
            goals[i % 2]++;
        else if(s[i] == '?' && who == i % 2){
            goals[i % 2]++;
        }
        r[i % 2]--;
    }
    return 10;
}
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){cin>>s;cout<<min(Win(s,0),Win(s,1))<<endl;}
    return 0;
}