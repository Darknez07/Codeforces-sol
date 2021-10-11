#include <iostream>
#include <cmath>
#include <map>
using namespace std;
int main(){
    long long a,b,x;
    map<long long, int> m;
    int t;
    bool yes;
    cin>>t;
    for(int i=1;i<=10000;i++){
        a = (long long)pow(i, 3);
        m[a] = i;
    }
    while(t--){
        cin>>x;
        yes = false;
        for(int i=1;i<=10000;i++){
            b = (long long)pow(i, 3);
            a = x;
            a-=b;
            if(x <= 0)
                break;
            if(m.find(a) != m.end()){
                yes = true;
                break;
            }
        }
        cout<<(yes ? "YES": "NO")<<endl;
    }
    return 0;
}