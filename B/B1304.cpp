#include <iostream>
#include <string>
#include <map>
#include <algorithm>
// Nice code can make better;
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    string s,fake;
    map<string, string> m;
    for(int i=0;i<n;i++){
        cin>>s;
        fake = s;
        reverse(fake.begin(),fake.end());
        m[s] = fake;
    }
    bool once = false;
    string mid = "";
    s = "";
    fake = "";
    int times = 0;
    for(auto x: m){
        if(x.second == x.first && !once){
            once = true;
            mid = x.second;
            continue;
        }
        if(once && x.first == x.second)
            continue;
        if(m[x.second]!=""){
            s = x.first + s;
            fake+=x.second;
            m[x.first] = "";
            m[x.second] = "";
        }
    }
    s = (s + mid + fake);
    cout<<s.length()<<endl;
    cout<<s<<endl;
    return 0;
}