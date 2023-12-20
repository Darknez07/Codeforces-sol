#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void solve(){
    int n,num;
    cin>>n;
    map<int,int> counter;
    set<int> s;
    for(int i=0;i<n;i++){cin>>num;counter[num]++;s.insert(num);s.insert(num + 1);}
    int lst = 0,res = 0;
    // as  some n + 1 is non existent
    // the counter will have 0
    // thus will 0 the score
    // and thus continue;
    for(auto k: s){
        int c = counter[k];
        res+=max(0, c - lst);
        lst = c;
    }
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}