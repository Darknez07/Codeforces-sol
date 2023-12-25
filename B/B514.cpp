#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,ex = 0;
    double a,b,x,y;
    cin>>n>>a>>b;
    map<double,int> m;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x == a){
            ex = 1;
        }else{
            y-=b;
            x-=a;
            m[y/x]++;
        }
    }
    cout<<m.size() + ex<<endl;
}