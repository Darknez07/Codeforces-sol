#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<string,string> m,ans;
map<string,bool> visited;
string get_true(string s){
    while(m[s]!=""){
        s = m[s];
        visited[s] = true;
    }
    return s;
}
int main(){
    int users;
    cin>>users;
    string old,news;
    vector<string> from(users,"");
    for(int i=0;i<users;i++){
        cin>>old>>news;
        from[i] = old;
        m[old] = news;
    }
    for(int i=0;i<users;i++){
        if(visited[from[i]])
            continue;
        visited[from[i]] = true;
        ans[from[i]] = get_true(from[i]);
    }
    cout<<ans.size()<<endl;
    for(pair<string,string> x: ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}